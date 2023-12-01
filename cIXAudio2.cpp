#include "cIXAudio2.h"
#include "Logger.h"
#include "Macro.h"

cIXAudio2::cIXAudio2(void)
{
	m_pXAudio2 = NULL;
	m_pMasteringVoice = NULL;

	CoInitializeEx( NULL, COINIT_MULTITHREADED );

	if(FAILED( XAudio2Create(&m_pXAudio2) ))
	{
		LogData("XAudio2 �ʱ�ȭ ����");
		CoUninitialize();
		return;
	}

	if(FAILED( m_pXAudio2->CreateMasteringVoice(&m_pMasteringVoice) ))
	{
		LogData("MasteringVoice ���� ����");
		SAFE_RELEASE( m_pXAudio2 );
		return;
	}
}

cIXAudio2::~cIXAudio2(void)
{
	m_pMasteringVoice->DestroyVoice();
	SAFE_RELEASE( m_pXAudio2 );
	CoUninitialize();
}
