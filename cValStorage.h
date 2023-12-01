#pragma once

#include <windows.h>
#include <d3dx9.h>
#include "singleton.h"

// �ڵ�, ����̽� �� ��𿡼��� ���� ������ �ʿ䰡 �ִ� ��������
// �����ͷ� �����Ͽ� ��𿡼����� ���� �����ϰ� ����� Ŭ����
// �������� �ڵ� ���̳�, DirectX�� ����̽� ���� �ʿ��� ���
// �� ��������� ��Ŭ����ϰ� �Ʒ��� �Լ��� ȣ���ϸ� �ȴ�

class cValStorage : public Singleton <cValStorage>
{
private:
	// ������
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

/* �� ������ ���� ���� �Լ� */
cValStorage*		GetValStorage();

HINSTANCE			HGGetHInstance();	// �ν��Ͻ�
HWND				HGGetHWnd();		// �ڵ�
bool				HGIsWindowMode();	// â��� ����

LPDIRECT3D9			HGGetD3D();			// D3D ����
LPDIRECT3DDEVICE9	HGGetDevice();		// D3D ��ġ
LPD3DXSPRITE		HGGetSprite();		// D3D ��������Ʈ
float				HGGetFPS();			// �ʴ� ������