#pragma once
#include "Logger.h"
#include "cStart.h"

class cLose : virtual public SceneNode
{
private:
	int Scene;
public:
	cLose(void);
	virtual ~cLose(void);
	virtual bool MoveFrame();
	virtual void RenderFrame();
};
