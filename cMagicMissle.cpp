#include "cMagicMissle.h"

cMagicMissle::cMagicMissle(float initfX):cMissle()
{
	fX=initfX;
	AttackDamege=4;
	IsNeed=true;
	Scene=0;
}

void cMagicMissle::Render()
{
	if(IsNeed)
		GetTexManager()->DrawTex(62,fX,576);
	if(Bomb)
	{
		if(Scene>=0 && Scene<4)
			GetTexManager()->DrawTex(63,fX,576);
		else if(Scene>=4 && Scene<8)
			GetTexManager()->DrawTex(64,fX,576);
		else
			Bomb=false;
		Scene++;
	}		
}
void cMagicMissle::Move()
{
	if(fX!=NULL && IsNeed)
		fX+=10;
}