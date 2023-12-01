#pragma once
#include <d3d9.h>
#include <d3dx9.h>
#include "cValStorage.h"

class cTexture
{
private:
	LPDIRECT3DTEXTURE9 m_pTexture;

	int m_nWidth;
	int m_nHeight;
public:
	cTexture();
	~cTexture(void);
	void Load(char *szPath);
	void Blit(float fDestX, float fDestY, RECT* Rect=NULL, int nAlpha=255);
	void Free();
};