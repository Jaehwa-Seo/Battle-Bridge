#include "cEnemyCastle.h"

cEnemyCastle::cEnemyCastle(float initfX):cUnit()
{
	hp=2000;
	shield=5;
	AttackDamege=0;
	AttackDellay=120;
	AttackRange=0;
	AttackStyle=0;
	m_fX=initfX;
	AttackDel=120;
	DoingAttack=false;
	AttackScene=0;
	CanAttack=false;
	GoDamege=false;

	AttackStyle=1;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	Job=0;
	MagicScene=0;
}



void cEnemyCastle::Render()
{
	if(DeadMotion)
		DeadScene++;
	if(DeadScene==29)
		AllTheEnd=true;
	if(Magic)
	{
		if(MagicScene>=0 && MagicScene<5)
		{
			GetTexManager()->DrawTex(700,m_fX ,449 );
		}
		else if(MagicScene>=5 && MagicScene<10)
		{
			GetTexManager()->DrawTex(701,m_fX ,449 );
		}
		MagicScene++;
	}
	if(MagicScene==10)
	{
		Magic=false;
		MagicScene=0;
	}
	
}
void cEnemyCastle::AttackCheck()
{
	if(CanAttack==false && AttackDel==AttackDellay)
	{
		AttackDel=0;
		CanAttack=true;
	}
	else if(AttackDel!=AttackDellay)
	{
		AttackDel++;
	}

	if(DoingAttack==true && AttackScene==30)
	{
		DoingAttack=false;
		AttackScene=0;
		GoDamege=true;
		
	}
	else if(DoingAttack==true)
	{
		AttackScene++;
	}
}
void cEnemyCastle:: Attack(cUnit* people)
{
	if(DoingAttack==false && CanAttack==true)
	{
		DoingAttack=true;
		CanAttack=false;
	}
	if(GoDamege)
	{
		people->Hurt(AttackDamege);
		GoDamege=false;
	}

}
void cEnemyCastle::Move()
{
	
}
void cEnemyCastle::AttackUp(int Change)
{
	
}
void cEnemyCastle::ShieldUp(int Schange){
	shield=5+Schange;
	

}