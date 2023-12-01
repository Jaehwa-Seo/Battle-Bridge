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
	// ���� ��ȭ�� ���� iter�� ��ġ�� ��� �� �� ������ �� �����Ƿ�
	// �����ϰ� break�Ͽ� �ݺ����� ��������
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