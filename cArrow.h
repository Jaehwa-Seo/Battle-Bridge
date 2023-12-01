#pragma once
#include "cTexture.h"
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cUnit.h"
#include "Logger.h"
#include "cMissle.h"

class cArrow :public cMissle
{
private:
public:
	cArrow(float initfX);
	void Move();
	void Render();
};
