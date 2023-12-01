#include "cEnemyArrow.h"

cEnemyArrow::cEnemyArrow(float initfX):cMissle()
{
	fX=initfX;
	AttackDamege=4;
	IsNeed=true;
}

void cEnemyArrow::Render()
{
	if(IsNeed)
		GetTexManager()->DrawTex(48,fX,576);
}
void cEnemyArrow::Move()
{
	if(fX!=NULL && IsNeed)
		fX-=10;
}