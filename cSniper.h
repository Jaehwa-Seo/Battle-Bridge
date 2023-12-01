#pragma once
#include "cTexture.h"
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cUnit.h"

class cSniper : public cUnit
{
public:
	cSniper(float initfX);
	void Render();
	void AttackCheck();
	void Attack(cUnit* people);
	void Move();	
	void AttackUp(int Change);
	void ShieldUp(int Schange);
	
};
