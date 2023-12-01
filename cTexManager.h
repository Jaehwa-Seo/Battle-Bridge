#pragma once
#include "cTexture.h"
#include "singleton.h"
#include <map>

using std::map;

class cTexManager : public Singleton<cTexManager>
{
private:
	map<int, cTexture*> m_TextureMap;
public:
	~cTexManager(void);

	void Clear();
	void AddTex(int nID, char* szPath);
	void DrawTex(int nID, float fDestX, float fDestY, RECT* Rect=NULL, int nAlpha=255);
};

cTexManager* GetTexManager();