#pragma once
#include "Logger.h"
#include "cStart.h"

class cWin : virtual public SceneNode
{
private:
	int Scene;
public:
	cWin(void);
	virtual ~cWin(void);
	virtual bool MoveFrame();
	virtual void RenderFrame();
};
