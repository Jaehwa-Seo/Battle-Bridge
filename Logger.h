#ifndef _ZFLOG_H_
#define _ZFLOG_H_

#include <windows.h>

#include <stdio.h>


#define ZF_LOG_TARGET_CONSOLE			0x00000001
#define ZF_LOG_TARGET_FILE				0x00000002
#define ZF_LOG_TARGET_WINDOW			0x00000004
#define ZF_LOG_TARGET_ALL				(ZF_LOG_TARGET_CONSOLE|ZF_LOG_TARGET_FILE|ZF_LOG_TARGET_WINDOW)
#define ZF_LOG_WINDOW_TITLE				L"Engine Logger"
#define ZF_LOG_WINDOW_CX				300
#define ZF_LOG_WINDOW_CY				600

/* 로그창을 없애려면 아래의 디파인을 주석처리하세요 */
#define DEBUG_LOGGING

class ZFLog
{
	unsigned int	m_nTarget;
	char			m_szFilename[MAX_PATH];
	HWND			m_hwnd;
	HWND			m_hwndList;
public:
			ZFLog( UINT32 nTarget, LPSTR szFilename = NULL );
			~ZFLog();
	void	CreateLogWindow();
	int		Log( LPSTR fmt, ... );
private:
	static	LRESULT CALLBACK ZFLog::WndProcZFLog( HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam );
};

extern ZFLog*		g_pLog;

#ifdef DEBUG_LOGGING
	#define InitLogger(); { g_pLog = new ZFLog(ZF_LOG_TARGET_WINDOW); }
	#define LogData  g_pLog->Log
#else
	#define InitLogger();
	#define LogData(x)
#endif //DEBUG_LOGGING

#endif // _ZFLOG_H_