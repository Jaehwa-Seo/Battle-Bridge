#pragma once

#define SCENE_CHANGE 1

class SceneNode
{
private:
public:
	SceneNode() {};
	virtual ~SceneNode() {};
	virtual void RenderFrame()=0;
	virtual bool MoveFrame()=0;
};