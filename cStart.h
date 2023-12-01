#pragma once
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cTexture.h"
#include "windows.h"
#include "cPad.h"

class cStart : virtual public SceneNode
{
private:
	cTexture m_Tex;
	int Scene;
	bool p;
public:
	cStart(bool pad);
	virtual ~cStart(void);
	virtual bool MoveFrame();
	virtual void RenderFrame();
};
