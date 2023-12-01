#pragma once
#include "Logger.h"
#include "cMain.h"

class cPad : virtual public SceneNode
{
private:
	int chance;
	bool correct;
	int quastionnum;
	bool Scene;
	bool correc;
	int PadScene;
	int PScene;
	bool StartScene;
	bool CORRECT;
	bool WRONG;
	int Cotime;
	int Wrtime;
public:
	cPad(bool startScene);
	virtual ~cPad(void);
	virtual bool MoveFrame();
	virtual void RenderFrame();
};
