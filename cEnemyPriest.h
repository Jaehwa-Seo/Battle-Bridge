#pragma once
#include "cTexture.h"
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cEnemyUnit.h"

class cEnemyPriest : public cEnemyUnit
{
protected:
public:
	cEnemyPriest(float initfX);
	~cEnemyPriest(void);
	void Render();
	void Attack(cEnemyUnit people);
	void Move();
};