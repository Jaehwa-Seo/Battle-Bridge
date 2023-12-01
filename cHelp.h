#pragma once
#include "Logger.h"
#include "cPad.h"

class cHelp : virtual public SceneNode
{
private:
	int Scene;
public:
	cHelp(void);
	virtual ~cHelp(void);
	virtual bool MoveFrame();
	virtual void RenderFrame();
};
