#include "cFont.h"

cFont::~cFont()
{
	m_Font->Release();
}

cFont::cFont(char* fontname, int width, int height, int bold)
{
	SetFont(fontname, width, height, bold);
}

void cFont::SetFont(char* fontname, int width, int height, int bold)
{
	D3DXCreateFontA(
		HGGetDevice(),
		height,
		width,
		bold,
		0,
		false,
		HANGEUL_CHARSET,
		OUT_DEFAULT_PRECIS,
		ANTIALIASED_QUALITY,
		DEFAULT_PITCH | FF_DONTCARE,
		fontname,
		&m_Font);
}

void cFont::Draw(float x, float y, char* text, D3DCOLOR color)
{
	RECT rec = {(long)x, (long)y, 0, 0};
	m_Font->DrawTextA(
		HGGetSprite(),
		text,
		-1,
		&rec,
		DT_NOCLIP,
		color
		);
}