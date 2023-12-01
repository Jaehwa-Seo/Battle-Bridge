#include "cEnemyArcher.h"

cEnemyArcher::cEnemyArcher(float initfX):cUnit()
{
	hp=50;
	shield=0;
	AttackDamege=15;
	AttackDellay=120;
	AttackRange=150;
	AttackStyle=0;
	m_fX=initfX;
	AttackDel=120;
	DoingAttack=false;
	AttackScene=0;
	CanAttack=false;
	GoDamege=false;
	AttackStyle=0;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	MagicScene=0;
	Job=1;
}
void cEnemyArcher::Render()
{
	if(DeadMotion)
		DeadScene++;
	if(DeadScene==29)
		AllTheEnd=true;
	if(DeadMotion && hp<=0)
	{
		if(DeadScene>=0 && DeadScene<=10)
			GetTexManager()->DrawTex(49,m_fX ,450 );
		else if(DeadScene>=10 && DeadScene<=20)
			GetTexManager()->DrawTex(50,m_fX ,450 );
		else if(DeadScene>=20 && DeadScene<=30)
			GetTexManager()->DrawTex(51,m_fX+15 ,450 );
	}
	else if(DoingAttack==false)
	{
		switch(SceneNumber)
		{
		case 1:GetTexManager()->DrawTex(40,m_fX ,449 );break;
		case 2:GetTexManager()->DrawTex(41,m_fX ,449 );break;
		case 3:GetTexManager()->DrawTex(42,m_fX ,449 );break;
		case 4:GetTexManager()->DrawTex(43,m_fX ,449 );break;
		case 5:GetTexManager()->DrawTex(44,m_fX ,449 );break;
		}
	}
	else
	{
		if(AttackScene>=0 && AttackScene<8)
		{
			GetTexManager()->DrawTex(45,m_fX ,449 );
		}
		else if(AttackScene>=8 && AttackScene<16)
		{
			GetTexManager()->DrawTex(46,m_fX ,449 );
		}
		else if(AttackScene>=16 && AttackScene<24)
			GetTexManager()->DrawTex(47,m_fX ,449 );
		else if(AttackScene>=24 && AttackScene<32)
			GetTexManager()->DrawTex(48,m_fX,449);
	}
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
void cEnemyArcher:: AttackCheck()
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
			
	}
	else if(DoingAttack==true)
	{
		AttackScene++;
	}
	if(DoingAttack==true && AttackScene==24)
	{
		GoDamege=true;
	}
}
void cEnemyArcher:: Attack(cUnit* people)
{	
	if(DoingAttack==false && CanAttack==true)
	{
		DoingAttack=true;
		CanAttack=false;
	}
	if(GoDamege)
	{
		people->Hurt(AttackDamege);
		people->Bleeding();
		GoDamege=false;
	}
}
void cEnemyArcher::Move()
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
	else if(SceneDellay>=81 && SceneDellay<=100)
		SceneNumber=5;
	if(SceneDellay==100)
		SceneDellay=0;
	SceneDellay++;
	}
}
void cEnemyArcher::AttackUp(int Change){
	AttackDamege=15+Change*(AttackDamege/10);
	

}
void cEnemyArcher::ShieldUp(int Schange){
	shield=Schange;
	

}