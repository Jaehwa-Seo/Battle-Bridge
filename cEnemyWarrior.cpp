#include "cEnemyWarrior.h"

cEnemyWarrior::cEnemyWarrior(float initfX):cUnit()
{
	hp=60;
	shield=0;
	AttackDamege=20;
	AttackDellay=120;
	AttackRange=50;
	AttackStyle=0;
	m_fX=initfX+15;
	AttackDel=120;
	DoingAttack=false;
	AttackScene=0;
	CanAttack=false;
	GoDamege=false;
	DeadMotion=false;
	Blood=false;
	AttackStyle=1;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	Job=0;
	MagicScene=0;
}


void cEnemyWarrior::Render()
{
	if(DeadMotion && hp<=0)
	{
		if(DeadScene>=0 && DeadScene<=10)
			GetTexManager()->DrawTex(25,m_fX-15 ,450 );
		else if(DeadScene>=10 && DeadScene<=20)
			GetTexManager()->DrawTex(26,m_fX-10 ,450 );
		else if(DeadScene>=20 && DeadScene<=30)
			GetTexManager()->DrawTex(27,m_fX-31 ,450 );
	}
	else if(DoingAttack==false)
	{
		switch(SceneNumber)
		{
		case 1:GetTexManager()->DrawTex(14,m_fX-15 ,449 );break;
		case 2:GetTexManager()->DrawTex(15,m_fX-15 ,449 );break;
		case 3:GetTexManager()->DrawTex(16,m_fX-15 ,449 );break;
		case 4:GetTexManager()->DrawTex(17,m_fX-15 ,449 );break;
		case 5:GetTexManager()->DrawTex(18,m_fX-15 ,449 );break;
		case 6:GetTexManager()->DrawTex(19,m_fX-15 ,449 );break;
		}
	}
	else //여기 밑에있는것들 ㅇㅇ
	{
		if(AttackScene>=0 && AttackScene<=10)
		{
			GetTexManager()->DrawTex(20,m_fX-15,449 );
		}
		else if(AttackScene>=10 && AttackScene<=20)
		{
			GetTexManager()->DrawTex(21,m_fX-15 ,449 );
		}
		else if(AttackScene>=20 && AttackScene<=30)
			GetTexManager()->DrawTex(22,m_fX-15 ,449 );
		else if(AttackScene>=30 && AttackScene<=40)
			GetTexManager()->DrawTex(23,m_fX-15 ,449 );
		else if(AttackScene>=40 && AttackScene<=50)
			GetTexManager()->DrawTex(24,m_fX-15 ,449 );
	}

	if(Blood)
	{
		GetTexManager()->DrawTex(88,m_fX,449);
		Blood=false;
	}
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
void cEnemyWarrior::AttackCheck()
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
void cEnemyWarrior:: Attack(cUnit* people)
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
void cEnemyWarrior::Move()
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
		else if(SceneDellay>=101 && SceneDellay<=120)
			SceneNumber=6;
		if(SceneDellay==120)
			SceneDellay=0;
		SceneDellay++;
	}
}
void cEnemyWarrior::AttackUp(int Change){
	AttackDamege=20+Change*(AttackDamege/10);

}
void cEnemyWarrior::ShieldUp(int Schange){
	shield=Schange;
	

}