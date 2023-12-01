#include <list>
#include "singleton.h"
#include "SceneNode.h"

using std::list;

class cSceneManager : public Singleton<cSceneManager>
{
private:
	list<SceneNode*> m_SceneList;
public:
	~cSceneManager();
	void AddSceneToFront(SceneNode* Scene);
	void DeleteFrontScene();
	void MoveAllFrame();
	void RenderAllFrame();
};

cSceneManager* GetSceneManager();