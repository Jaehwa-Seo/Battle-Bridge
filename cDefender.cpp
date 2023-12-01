#include "cDefender.h"

cDefender::cDefender(float initfX):cUnit()
{
	hp=100;
	shield=4;
	AttackDamege=20;
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
	Job=4;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	MagicScene=0;
	srand(GetTickCount());
}
void cDefender::Render()
{
	if(DeadMotion && hp<=0)
	{
		if(DeadScene>=0 && DeadScene<=10)
			GetTexManager()->DrawTex(131,m_fX+15 ,450 );
		else if(DeadScene>=10 && DeadScene<=20)
			GetTexManager()->DrawTex(132,m_fX+10 ,450 );
		else if(DeadScene>=20 && DeadScene<=30)
			GetTexManager()->DrawTex(133,m_fX+31 ,450 );
	}
	else if(DoingAttack==false)
	{
		switch(SceneNumber)
		{
		case 1:GetTexManager()->DrawTex(120,m_fX,450 );break;
		case 2:GetTexManager()->DrawTex(121,m_fX ,450 );break;
		case 3:GetTexManager()->DrawTex(122,m_fX ,450 );break;
		case 4:GetTexManager()->DrawTex(123,m_fX ,450 );break;
		case 5:GetTexManager()->DrawTex(124,m_fX ,450 );break;
		case 6:GetTexManager()->DrawTex(125,m_fX ,450 );break;
		}
	}
	else
	{
		if(AttackScene>=0 && AttackScene<=10)
		{
			GetTexManager()->DrawTex(126,m_fX,450 );
		}
		else if(AttackScene>=10 && AttackScene<=20)
		{
			GetTexManager()->DrawTex(127,m_fX,450 );
		}
		else if(AttackScene>=20 && AttackScene<=30)
			GetTexManager()->DrawTex(128,m_fX ,450 );
		else if(AttackScene>=30 && AttackScene<=40)
			GetTexManager()->DrawTex(129,m_fX ,450 );
		else if(AttackScene>=40 && AttackScene<=50)
			GetTexManager()->DrawTex(130,m_fX ,450 );
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
void cDefender:: AttackCheck()
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
void cDefender:: Attack(cUnit* people)
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
void cDefender::Move()
{
	if(speed)
		m_fX+=7;
	else
		m_fX+=5;
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

void cDefender::Hurt(int AttackDamege)
{
	chance=rand()%10+1;
		if(chance==1)
		{
			hp-=((AttackDamege/2)-shield);
		}
		else
			hp-=(AttackDamege-shield);
}
void cDefender::AttackUp(int Change){
	AttackDamege=20+Change*(AttackDamege/10);

}
void cDefender::ShieldUp(int Schange){
	shield=4+Schange;

}