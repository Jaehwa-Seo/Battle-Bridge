#pragma once
#include "cValStorage.h"

class cFont
{
private:
	ID3DXFont* m_Font;
	
public:
	~cFont();
	cFont(char* fontname, int width, int height, int bold=500);
	void SetFont(char* fontname, int width, int height, int bold=500);
	void Draw(float x, float y, char* text, D3DCOLOR color=D3DCOLOR_XRGB(0, 0, 0));
};
