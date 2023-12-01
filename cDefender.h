#pragma once
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cTexture.h"
#include "windows.h"
#include "cUnit.h"

class cDefender : public cUnit
{
public:
	cDefender(float initfX);
	void Render();
	void AttackCheck();
	void Attack(cUnit* people);
	void Move();
	void Hurt(int AttackDamege);
	void AttackUp(int Change);
	void ShieldUp(int Schange);
};
