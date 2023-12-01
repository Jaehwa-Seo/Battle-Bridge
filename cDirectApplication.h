#pragma once
#include "cApplication.h"

#include "cSceneManager.h"
#include "cSoundManager.h"
#include "cDirectInput.h"
#include "cTexManager.h"

/* DirectX 관련 변수를 초기화하고 설정하는 클래스 */
class cDirectApplication : public cApplication
{
private:
	// DirectX
	LPDIRECT3D9         m_pD3D;			// D3D 객체 포인터 변수
	LPDIRECT3DDEVICE9   m_pd3dDevice;	// 디바이스 포인터 변수
	LPD3DXSPRITE		m_pd3dSprite;	// 스프라이트 포인터 변수
	D3DPRESENT_PARAMETERS m_d3dpp;
	float m_fFPS;

	// 매니저
	cTexManager *m_pTexManager;
	cSceneManager *m_pSceneManager;
	cSoundManager m_SoundManager;
	cDirectInput m_DirectInput;
	
public:
	cDirectApplication(wchar_t *szWindowName, int nWidth, int nHeight);
	~cDirectApplication(void);

	VOID Render();
	void CalculateFPS();
	virtual void RunMessageLoop();

	float GetFPS() { return m_fFPS; }
	LPDIRECT3DDEVICE9 GetD3DDevice() { return m_pd3dDevice; }
	LPD3DXSPRITE GetD3DSprite() { return m_pd3dSprite; }

};
