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
		LogData("%s WAVE ���� ���� ����", szPath);
		return;
	}

	WAVEFORMATEX *pwfx = wav.GetFormat();
	DWORD m_cbWaveSize = wav.GetSize();
	m_pbWaveData = new BYTE[m_cbWaveSize];
	if(FAILED( wav.Read(m_pbWaveData, m_cbWaveSize, &m_cbWaveSize) ))
	{
		LogData("Wave ���� �б� ����");
		return;
	}
	
	
	if(FAILED( s_pXAudio2->GetXAudio2()->CreateSourceVoice(&m_pSourceVoice, pwfx, 0, XAUDIO2_DEFAULT_FREQ_RATIO, this  ) ))
	{
		LogData("SourceVoice ���� ����");
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
        LogData("SubmitSourceBuffer ����");
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

/* ������ ����� ������ ��(���۰� ���� ������ ��) ȣ��Ǵ� �ݹ��Լ� */
COM_DECLSPEC_NOTHROW void STDMETHODCALLTYPE cSourceVoice::OnBufferEnd(THIS_ void* pBufferContext)
{
	if(m_State != eSTOP)
	{
		// cSourceVoice::Stop() �� �ٸ��� SourceVoice�� Stop()��
		// ���� ������ ���Ŀ� �;���. ������ �𸣰���
		// �ƴ»�� ���� �ּ��� �����ּ���
		m_pSourceVoice->FlushSourceBuffers();
		m_pSourceVoice->SubmitSourceBuffer(&m_buffer);
		m_pSourceVoice->Stop();
		m_State = eSTOP;
	}
}