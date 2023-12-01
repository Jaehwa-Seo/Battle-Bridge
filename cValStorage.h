#pragma once

#include <windows.h>
#include <d3dx9.h>
#include "singleton.h"

// 핸들, 디바이스 등 어디에서나 값을 참조할 필요가 있는 변수들을
// 포인터로 참조하여 어디에서든지 접근 가능하게 만드는 클래스
// 윈도우의 핸들 값이나, DirectX의 디바이스 등이 필요할 경우
// 이 헤더파일을 인클루드하고 아래의 함수를 호출하면 된다

class cValStorage : public Singleton <cValStorage>
{
private:
	// 윈도우
	HINSTANCE		 *m_hInst;
	WNDCLASSEX		 *wcex;
	HWND			 *m_hWnd;
	bool			 *m_isWindowMode;

	// DirectX
	LPDIRECT3D9				*m_pD3D;
	LPDIRECT3DDEVICE9		*m_pd3dDevice;
	LPD3DXSPRITE			*m_pd3dSprite;
	float					*m_fFPS;
public:
	cValStorage() { m_hInst=NULL; wcex=NULL; m_hWnd=NULL; m_pD3D=NULL; m_pd3dDevice=NULL; m_pd3dSprite=NULL; m_fFPS=NULL; }

	void SetVal(HINSTANCE* hInst) { m_hInst = hInst; }
	void SetVal(WNDCLASSEX* wcex) { this->wcex = wcex; }
	void SetVal(HWND* hWnd) { m_hWnd = hWnd; }
	void SetVal(bool* isWindowMode) { m_isWindowMode = isWindowMode; }

	void SetVal(LPDIRECT3D9 *pD3D) { m_pD3D = pD3D; }
	void SetVal(LPDIRECT3DDEVICE9 *pd3dDevice) { m_pd3dDevice = pd3dDevice; }
	void SetVal(LPD3DXSPRITE *pd3dSprite) { m_pd3dSprite = pd3dSprite; }
	void SetVal(float *fFPS) { m_fFPS = fFPS; }

	HINSTANCE GetHInstance() { return *m_hInst; }
	WNDCLASSEX GetWndClassEx() { return *wcex; }
	HWND GetHWnd() { return *m_hWnd; }
	bool IsWindowMode() { return *m_isWindowMode; }

	LPDIRECT3D9 GetD3D() { return *m_pD3D; }
	LPDIRECT3DDEVICE9 GetDevice() { return *m_pd3dDevice; }
	LPD3DXSPRITE GetSprite() { return *m_pd3dSprite; }
	float GetFPS() { return *m_fFPS; }
};

/* 값 참조를 위한 전역 함수 */
cValStorage*		GetValStorage();

HINSTANCE			HGGetHInstance();	// 인스턴스
HWND				HGGetHWnd();		// 핸들
bool				HGIsWindowMode();	// 창모드 여부

LPDIRECT3D9			HGGetD3D();			// D3D 변수
LPDIRECT3DDEVICE9	HGGetDevice();		// D3D 장치
LPD3DXSPRITE		HGGetSprite();		// D3D 스프라이트
float				HGGetFPS();			// 초당 프레임