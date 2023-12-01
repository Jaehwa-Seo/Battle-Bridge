#include "cApplication.h"

cApplication::cApplication(wchar_t *szWindowName, int nWidth, int nHeight)
{
	GetValStorage()->SetVal(&m_hInst);
	GetValStorage()->SetVal(&wcex);
	GetValStorage()->SetVal(&m_hWnd);
	GetValStorage()->SetVal(&m_isWindowMode);

	m_isWindowMode = true;

	// 윈도우 클래스 등록
	m_hInst = GetModuleHandle(NULL);

	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = MsgProc;
	wcex.cbClsExtra = 0L;
	wcex.cbWndExtra = 0L;
	wcex.hInstance = m_hInst;
	wcex.hIcon = LoadIcon(m_hInst, IDI_APPLICATION);
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = NULL;
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = L"HGEngine";
	wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	RegisterClassEx( &wcex );

	// 윈도우 생성
	m_hWnd = CreateWindow( wcex.lpszClassName, szWindowName,
		WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, nWidth, nHeight,
		NULL, NULL, wcex.hInstance, NULL );

	Resize(nWidth, nHeight);

	// 윈도우 출력
	ShowWindow( m_hWnd, SW_SHOWDEFAULT );
	UpdateWindow( m_hWnd );
}

cApplication::~cApplication(void)
{
	UnregisterClass(wcex.lpszClassName, wcex.hInstance );
}

bool cApplication::Resize(long Width, long Height)
{
	RECT WndRect, ClientRect;
	long WndWidth, WndHeight;

	GetWindowRect(m_hWnd, &WndRect);
	GetClientRect(m_hWnd, &ClientRect);

	WndWidth  = (WndRect.right  - (ClientRect.right  - Width))  - WndRect.left;
	WndHeight = (WndRect.bottom - (ClientRect.bottom - Height)) - WndRect.top;

	MoveWindow(m_hWnd, WndRect.left, WndRect.top, WndWidth, WndHeight, TRUE);

	return true;
}

LRESULT WINAPI cApplication::MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
	switch( msg )
	{
	case WM_DESTROY:
            PostQuitMessage( 0 );
            return 0;
    }

    return DefWindowProc( hWnd, msg, wParam, lParam );
}