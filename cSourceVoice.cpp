#include "cSourceVoice.h"
#include "Logger.h"
#include "Macro.h"

cIXAudio2* cSourceVoice::s_pXAudio2 = NULL;

void cSourceVoice::InitXAudio2()
{
	s_pXAudio2 = new cIXAudio2();
}

cSourceVoice::cSourceVoice(char* szPath)
{
	m_State = eSTOP;

	CWaveFile wav;
	if(FAILED( wav.Open(szPath, NULL, WAVEFILE_READ) ))
	{
		LogData("%s WAVE 파일 열기 실패", szPath);
		return;
	}

	WAVEFORMATEX *pwfx = wav.GetFormat();
	DWORD m_cbWaveSize = wav.GetSize();
	m_pbWaveData = new BYTE[m_cbWaveSize];
	if(FAILED( wav.Read(m_pbWaveData, m_cbWaveSize, &m_cbWaveSize) ))
	{
		LogData("Wave 파일 읽기 실패");
		return;
	}
	
	
	if(FAILED( s_pXAudio2->GetXAudio2()->CreateSourceVoice(&m_pSourceVoice, pwfx, 0, XAUDIO2_DEFAULT_FREQ_RATIO, this  ) ))
	{
		LogData("SourceVoice 생성 실패");
		return;
	}

	ZeroMemory(&m_buffer, sizeof(m_buffer));
    m_buffer.pAudioData = m_pbWaveData;
    m_buffer.Flags = XAUDIO2_END_OF_STREAM;
    m_buffer.AudioBytes = m_cbWaveSize;
	m_buffer.LoopBegin = XAUDIO2_NO_LOOP_REGION;
	//m_buffer.LoopCount = XAUDIO2_LOOP_INFINITE;
	if(FAILED( m_pSourceVoice->SubmitSourceBuffer( &m_buffer ) ))
    {
        LogData("SubmitSourceBuffer 실패");
        m_pSourceVoice->DestroyVoice();
        SAFE_DELETE_ARRAY( m_pbWaveData );
        return;
    }
}

cSourceVoice::~cSourceVoice(void)
{
	m_pSourceVoice->DestroyVoice();
	SAFE_DELETE_ARRAY( m_pbWaveData );
}

void cSourceVoice::Play()
{
	if(m_State != ePLAY)
	{
		m_pSourceVoice->Start();
		m_State = ePLAY;
	}
}

void cSourceVoice::Stop()
{
	if(m_State != eSTOP)
	{
		m_pSourceVoice->Stop();
		m_pSourceVoice->FlushSourceBuffers();
		m_pSourceVoice->SubmitSourceBuffer(&m_buffer);
		m_State = eSTOP;
	}
}

void cSourceVoice::Pause()
{
	if(m_State != ePAUSE)
	{
		m_pSourceVoice->Stop();
		m_State = ePAUSE;
	}
}

/* 사운드의 재생이 끝났을 때(버퍼가 끝에 달했을 때) 호출되는 콜백함수 */
COM_DECLSPEC_NOTHROW void STDMETHODCALLTYPE cSourceVoice::OnBufferEnd(THIS_ void* pBufferContext)
{
	if(m_State != eSTOP)
	{
		// cSourceVoice::Stop() 과 다르게 SourceVoice의 Stop()이
		// 버퍼 재전송 이후에 와야함. 이유는 모르겠음
		// 아는사람 여기 주석좀 고쳐주세여
		m_pSourceVoice->FlushSourceBuffers();
		m_pSourceVoice->SubmitSourceBuffer(&m_buffer);
		m_pSourceVoice->Stop();
		m_State = eSTOP;
	}
}