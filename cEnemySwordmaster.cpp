#include "cEnemySwordmaster.h"

cEnemySwordmaster::cEnemySwordmaster(float initfX):cUnit()
{
	hp=80;
	shield=1;
	AttackDamege=25;
	AttackDellay=120;
	AttackRange=50;
	AttackStyle=0;
	m_fX=initfX;
	AttackDel=120;
	DoingAttack=false;
	AttackScene=0;
	CanAttack=false;
	GoDamege=false;
	AttackStyle=1;
	Job=3;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	MagicScene=0;
	srand(GetTickCount());
}
void cEnemySwordmaster::Render()
{
	if(DeadMotion && hp<=0)
	{
		if(DeadScene>=0 && DeadScene<=10)
			GetTexManager()->DrawTex(117,m_fX+15 ,450 );
		else if(DeadScene>=10 && DeadScene<=20)
			GetTexManager()->DrawTex(118,m_fX+10 ,450 );
		else if(DeadScene>=20 && DeadScene<=30)
			GetTexManager()->DrawTex(119,m_fX+31 ,450 );
	}
	else if(DoingAttack==false)
	{
		switch(SceneNumber)
		{
		case 1:GetTexManager()->DrawTex(106,m_fX,450 );break;
		case 2:GetTexManager()->DrawTex(107,m_fX ,450 );break;
		case 3:GetTexManager()->DrawTex(108,m_fX ,450 );break;
		case 4:GetTexManager()->DrawTex(109,m_fX ,450 );break;
		case 5:GetTexManager()->DrawTex(110,m_fX ,450 );break;
		case 6:GetTexManager()->DrawTex(111,m_fX ,450 );break;
		}
	}
	else
	{
		if(AttackScene>=0 && AttackScene<=10)
		{
			GetTexManager()->DrawTex(112,m_fX,450 );
		}
		else if(AttackScene>=10 && AttackScene<=20)
		{
			GetTexManager()->DrawTex(113,m_fX,450 );
		}
		else if(AttackScene>=20 && AttackScene<=30)
			GetTexManager()->DrawTex(114,m_fX ,450 );
		else if(AttackScene>=30 && AttackScene<=40)
			GetTexManager()->DrawTex(115,m_fX ,450 );
		else if(AttackScene>=40 && AttackScene<=50)
			GetTexManager()->DrawTex(116,m_fX ,450 );
	}
	if(DeadMotion)
		DeadScene++;
	if(DeadScene==49)
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
void cEnemySwordmaster:: AttackCheck()
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

	if(DoingAttack==true && AttackScene==50)
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
void cEnemySwordmaster:: Attack(cUnit* people)
{	
	if(DoingAttack==false && CanAttack==true)
	{
		DoingAttack=true;
		CanAttack=false;
	}
	if(GoDamege)
	{
		chance=rand()%10+1;
		if(chance==1)
		{
			people->Hurt(AttackDamege*2);
			people->CriticalHit();
			people->Bleeding();
		}
		else
		{
			people->Hurt(AttackDamege);
			people->Bleeding();
		}
		GoDamege=false;
	}
}
void cEnemySwordmaster::Move()
{
	m_fX-=5;
	if(DoingAttack==false)
	{
	if(SceneDellay>=0 && SceneDellay<=20)
		SceneNumber=1;
	else if(SceneDellay>=21 && SceneDellay<=40)
		SceneNumber=2;
	else if(SceneDellay>=41 && SceneDellay<=60)
		SceneNumber=3;
	else if(SceneDellay>=61 && SceneDellay<=80)
		SceneNumber=4;
	if(SceneDellay==80)
		SceneDellay=0;
	SceneDellay++;
	}
}
void cEnemySwordmaster::AttackUp(int Change){
	AttackDamege=25+Change*(AttackDamege/10);
	

}
void cEnemySwordmaster::ShieldUp(int Schange){
	shield=1+Schange;

}