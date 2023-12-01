#pragma once
#include <d3d9.h>
#include <d3dx9.h>

#include "cValStorage.h"

#include "singleton.h"
#include "Macro.h"
#include "Logger.h"

/* API를 이용해 윈도우 창을 생성하는 클래스 */
class cApplication : public Singleton <cApplication>
{
private:
	// 윈도우 관련
	HINSTANCE m_hInst;
	WNDCLASSEX wcex;
	HWND m_hWnd;
	bool m_isWindowMode;

public:
	cApplication(wchar_t *szWindowName, int nWidth, int nHeight);
	~cApplication(void);
	bool Resize(long Width, long Height);

	virtual void RunMessageLoop() {};
	static LRESULT WINAPI MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam );
	
	bool IsWindowMode() { return true; }
	HWND GetHWnd() { return m_hWnd; }
	HINSTANCE GetHInstance() { return m_hInst; }
	
};

cApplication* GetApplication();