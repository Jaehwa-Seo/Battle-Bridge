#include "cEnemySniper.h"

cEnemySniper::cEnemySniper(float initfX):cUnit()
{
	hp=60;
	shield=1;
	AttackDamege=40;
	AttackDellay=240;
	AttackRange=150;
	AttackStyle=0;
	m_fX=initfX;
	AttackDel=240;
	DoingAttack=false;
	AttackScene=0;
	CanAttack=false;
	GoDamege=false;
	AttackStyle=0;
	Job=6;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	MagicScene=0;
}
void cEnemySniper::Render()
{
	if(DeadMotion && hp<=0)
	{
		if(DeadScene>=0 && DeadScene<=10)
			GetTexManager()->DrawTex(201,m_fX ,450 );
		else if(DeadScene>=10 && DeadScene<=20)
			GetTexManager()->DrawTex(202,m_fX ,450 );
		else if(DeadScene>=20 && DeadScene<=30)
			GetTexManager()->DrawTex(203,m_fX+15 ,450 );
	}
	else if(DoingAttack==false)
	{
		switch(SceneNumber)
		{
		case 1:GetTexManager()->DrawTex(189,m_fX ,450 );break;
		case 2:GetTexManager()->DrawTex(190,m_fX ,450 );break;
		case 3:GetTexManager()->DrawTex(191,m_fX ,450 );break;
		case 4:GetTexManager()->DrawTex(192,m_fX ,450 );break;
		case 5:GetTexManager()->DrawTex(193,m_fX ,450 );break;
		case 6:GetTexManager()->DrawTex(194,m_fX ,450 );break;
		}
	}
	else
	{
		if(AttackScene>=0 && AttackScene<8)
			GetTexManager()->DrawTex(195,m_fX ,450 );
		else if(AttackScene>=8 && AttackScene<16)
			GetTexManager()->DrawTex(196,m_fX ,450 );
		else if(AttackScene>=16 && AttackScene<24)
			GetTexManager()->DrawTex(197,m_fX,450 );
		else if(AttackScene>=24 && AttackScene<32)
			GetTexManager()->DrawTex(198,m_fX,450);
		else if(AttackScene>=32 && AttackScene<40)
			GetTexManager()->DrawTex(199,m_fX,450);
		else if(AttackScene>=40 && AttackScene<48)
			GetTexManager()->DrawTex(200,m_fX,450);
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
void cEnemySniper:: AttackCheck()
{
	if(CanAttack==false && AttackDel==AttackDellay)
	{
		AttackDel=0;
		CanAttack=true;
	} // 공격가능으로 바꿈
	else if(AttackDel!=AttackDellay)
	{
		AttackDel++;
	}// 공격 딜레이
	if(DoingAttack==true && AttackScene==48)
	{
		DoingAttack=false;
		AttackScene=0;
	} // 공격모션 정지
	else if(DoingAttack==true)
	{
		AttackScene++;
	}//공격모션 중

	if(DoingAttack==true && AttackScene==30)
	{
		GoDamege=true;
	}
}
void cEnemySniper:: Attack(cUnit* people)
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
			people->Hurt(people->Return_HP());
			people->Headshot();
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
void cEnemySniper::Move()
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
void cEnemySniper::AttackUp(int Change){
	AttackDamege=40+Change*(AttackDamege/10);
	

}
void cEnemySniper::ShieldUp(int Schange){
	shield=1+Schange;
	

}





















