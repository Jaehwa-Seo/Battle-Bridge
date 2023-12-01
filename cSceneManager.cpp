#include "cSceneManager.h"

cSceneManager::~cSceneManager()
{
	for(list<SceneNode*>::iterator iter = m_SceneList.begin();
		iter != m_SceneList.end();
		iter++)
	{
		delete (*iter);
	}
	m_SceneList.clear();
}

void cSceneManager::AddSceneToFront(SceneNode *Scene)
{
	m_SceneList.push_front(Scene);
}

void cSceneManager::DeleteFrontScene()
{
	delete (*m_SceneList.begin());
	m_SceneList.pop_front();
}

void cSceneManager::MoveAllFrame()
{
	// 씬의 변화에 따라 iter의 위치가 어디가 될 지 보증할 수 없으므로
	// 안전하게 break하여 반복문을 빠져나옴
	for(list<SceneNode*>::iterator iter = m_SceneList.begin();
		iter != m_SceneList.end();
		iter++)
	{
		if((*iter)->MoveFrame() == SCENE_CHANGE)
			break;
	}
}

void cSceneManager::RenderAllFrame()
{
	for(list<SceneNode*>::iterator iter = m_SceneList.begin();
		iter != m_SceneList.end();
		iter++)
	{
		(*iter)->RenderFrame();
	}
}

cSceneManager* GetSceneManager() { return cSceneManager::GetSingleton(); }