#include "cTexture.h"
#include "Logger.h"
#include "Macro.h"

cTexture::cTexture()
{
	m_pTexture = NULL;
	m_nWidth = 0;
	m_nHeight = 0;
}

cTexture::~cTexture(void)
{
	Free();
}

void cTexture::Load(char *szPath)
{
	D3DXIMAGE_INFO pSrcInfo;

	if( FAILED( D3DXCreateTextureFromFileExA(
		HGGetDevice(),
		szPath,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		1,
		0,
		D3DFMT_UNKNOWN,
		D3DPOOL_MANAGED,
		D3DX_DEFAULT,
		D3DX_DEFAULT,
		D3DCOLOR_ARGB(255, 255, 255, 255),
		&pSrcInfo,
		NULL,
		&m_pTexture)) )
	{
		LogData("%s 텍스쳐 생성 실패", szPath);
		m_pTexture = NULL;
	}

	m_nWidth = pSrcInfo.Width;
	m_nHeight = pSrcInfo.Height;
}

void cTexture::Blit(float fDestX, float fDestY, RECT* Rect, int nAlpha)
{
	if(m_pTexture == NULL)
		return;

	if(Rect == NULL)
	{
		fDestX -= m_nWidth*0.5f;
		fDestY -= m_nHeight*0.5f;
	}
	else
	{
		fDestX -= (Rect->right - Rect->left) * 0.5f;
		fDestY -= (Rect->bottom - Rect->top) * 0.5f;
	}
	HGGetSprite()->Draw(m_pTexture, Rect, NULL, &D3DXVECTOR3(fDestX, fDestY, 0.0f), D3DCOLOR_ARGB(nAlpha, 255, 255, 255));
}

void cTexture::Free()
{
	SAFE_RELEASE( m_pTexture );
	m_nWidth = 0;
	m_nHeight = 0;
}