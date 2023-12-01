#pragma once
#include "cTexture.h"
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cUnit.h"
#include "Logger.h"
#include "cMissle.h"

class cEnemyArrow :public cMissle
{
private:
public:
	cEnemyArrow(float initfX);
	void Move();
	void Render();
};
