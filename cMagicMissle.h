#pragma once
#include "cTexture.h"
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cUnit.h"
#include "Logger.h"
#include "cMissle.h"

class cMagicMissle :public cMissle
{
private:
	
public:
	cMagicMissle(float initfX);
	void Move();
	void Render();
};
