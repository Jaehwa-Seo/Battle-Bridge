#include "cFireMagician.h"

cFireMagician::cFireMagician(float initfX):cUnit()
{
	hp=40;
	shield=1;
	AttackDamege=65;
	AttackDellay=240;
	AttackRange=100;
	AttackStyle=0;
	m_fX=initfX;
	AttackDel=240;
	DoingAttack=false;
	AttackScene=0;
	CanAttack=false;
	GoDamege=false;
	AttackStyle=0;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	MagicScene=0;
	Job=8;
}
void cFireMagician::Render()
{
	
	if(DeadMotion && hp<=0)
	{
		if(DeadScene>=0 && DeadScene<=10)
			GetTexManager()->DrawTex(231,m_fX ,450 );
		else if(DeadScene>=10 && DeadScene<=20)
			GetTexManager()->DrawTex(232,m_fX ,450 );
		else if(DeadScene>=20 && DeadScene<=30)
			GetTexManager()->DrawTex(233,m_fX+15 ,450 );
	}
	else if(DoingAttack==false)
	{
		switch(SceneNumber)
		{
		case 1:GetTexManager()->DrawTex(224,m_fX ,450 );break;
		case 2:GetTexManager()->DrawTex(225,m_fX ,450 );break;
		case 3:GetTexManager()->DrawTex(226,m_fX ,450 );break;
		case 4:GetTexManager()->DrawTex(227,m_fX ,450 );break;
		}
	}
	else
	{
		if(AttackScene>=0 && AttackScene<8)
		{
			GetTexManager()->DrawTex(228,m_fX ,450 );
		}
		else if(AttackScene>=8 && AttackScene<16)
		{
			GetTexManager()->DrawTex(229,m_fX ,450 );
		}
		else if(AttackScene>=16 && AttackScene<=24)
			GetTexManager()->DrawTex(230,m_fX ,450 );
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
	if(DeadMotion)
		DeadScene++;
	if(DeadScene==29)
		AllTheEnd=true;
}
void cFireMagician:: AttackCheck()
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

	if(DoingAttack==true && AttackScene==24)
	{
		DoingAttack=false;
		AttackScene=0;
		
	}
	
	else if(DoingAttack==true)
	{
		AttackScene++;
	}
	if(DoingAttack==true && AttackScene==16)
		GoDamege=true;
}
void cFireMagician:: Attack(cUnit* people)
{	
	if(DoingAttack==false && CanAttack==true)
	{
		DoingAttack=true;
		CanAttack=false;
	}
	if(GoDamege)
	{
		people->Hurt(AttackDamege);
		people->FireAttack();
		chance=rand()%10+1;
		if(chance==1)
		{
			people->fire();
		}

		GoDamege=false;
	}
}
void cFireMagician::Move()
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
	if(SceneDellay==80)
		SceneDellay=0;
	SceneDellay++;
	}
}
void cFireMagician::AttackUp(int Change){
	AttackDamege=65+Change*(AttackDamege/10);

}
void cFireMagician::ShieldUp(int Schange){
	shield=1+Schange;

}