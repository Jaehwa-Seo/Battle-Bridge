#include "cTexManager.h"
#include "Logger.h"

cTexManager::~cTexManager(void)
{
	Clear();
}

void cTexManager::Clear()
{
	for(map<int, cTexture*>::iterator iter = m_TextureMap.begin();
		iter != m_TextureMap.end();
		iter++)
	{
		delete (iter->second);
	}
	m_TextureMap.clear();
}

void cTexManager::AddTex(int nID, char* szPath)
{
	cTexture *tex = new cTexture();
	tex->Load(szPath);
	m_TextureMap[nID] = tex;
}

void cTexManager::DrawTex(int nID, float fDestX, float fDestY, RECT* Rect, int nAlpha)
{
	if( m_TextureMap[nID] == NULL )
	{
		LogData("존재하지 않는 텍스쳐 ID : %d", nID);
		return;
	}
	m_TextureMap[nID]->Blit(fDestX, fDestY, Rect, nAlpha);
}

cTexManager* GetTexManager() { return cTexManager::GetSingleton(); }