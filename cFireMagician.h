#pragma once
#include "cTexture.h"
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cUnit.h"

class cFireMagician : public cUnit
{
public:
	cFireMagician(float initfX);
	void Render();
	void AttackCheck();
	void Attack(cUnit* people);
	void Move();	
	void AttackUp(int Change);
	void ShieldUp(int Schange);
	
};
