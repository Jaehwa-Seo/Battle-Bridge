#include "cArrow.h"

cArrow::cArrow(float initfX):cMissle()
{
	fX=initfX;
	AttackDamege=4;
	IsNeed=true;
}

void cArrow::Render()
{
	if(IsNeed)
	{
		GetTexManager()->DrawTex(39,fX,446);
	}
}
void cArrow::Move()
{
	if(fX!=NULL && IsNeed==true)
		fX+=10;
}