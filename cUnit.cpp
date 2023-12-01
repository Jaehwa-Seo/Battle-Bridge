#include "cUnit.h"

cUnit::cUnit()
{
	IsNeed=true;
	speed=false;

	SceneNumber=2;
	SceneDellay=0;
}


void cUnit::Dead()
{
	IsNeed=false;
	DeadMotion=true;
}
void cUnit::Speed(int a)
{
	if(a==1) 
		speed=true;
}
void cUnit:: Hurt(int AttackDamege)
{
	hp-=(AttackDamege-shield);
}