#pragma once
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cTexture.h"
#include "windows.h"
#include "cUnit.h"

class cSwordmaster : public cUnit
{
public:
	cSwordmaster(float initfX);
	void Render();
	void AttackCheck();
	void Attack(cUnit* people);
	void Move();
	void AttackUp(int Change);
	void ShieldUp(int Schange);
};
