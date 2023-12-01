#include "cArcher.h"

cArcher::cArcher(float initfX):cUnit()
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
	speed=false;
	AttackScene=0;
	CanAttack=false;
	GoDamege=false;
	AttackStyle=0;
	Job=1;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	MagicScene=0;
}
void cArcher::Render()
{
	if(DeadMotion && hp<=0)
	{
		if(DeadScene>=0 && DeadScene<=10)
			GetTexManager()->DrawTex(37,m_fX ,450 );
		else if(DeadScene>=10 && DeadScene<=20)
			GetTexManager()->DrawTex(38,m_fX ,450 );
		else if(DeadScene>=20 && DeadScene<=30)
			GetTexManager()->DrawTex(39,m_fX+15 ,450 );
	}
	else if(DoingAttack==false)
	{
		switch(SceneNumber)
		{
		case 1:GetTexManager()->DrawTex(28,m_fX ,450 );break;
		case 2:GetTexManager()->DrawTex(29,m_fX ,450 );break;
		case 3:GetTexManager()->DrawTex(30,m_fX ,450 );break;
		case 4:GetTexManager()->DrawTex(31,m_fX ,450 );break;
		case 5:GetTexManager()->DrawTex(32,m_fX ,450 );break;
		}
	}
	else
	{
		if(AttackScene>=0 && AttackScene<8)
			GetTexManager()->DrawTex(33,m_fX ,450 );
		else if(AttackScene>=8 && AttackScene<16)
			GetTexManager()->DrawTex(34,m_fX ,450 );
		else if(AttackScene>=16 && AttackScene<24)
			GetTexManager()->DrawTex(35,m_fX+15,450 );
		else if(AttackScene>=24 && AttackScene<32)
			GetTexManager()->DrawTex(36,m_fX,450);
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
void cArcher:: AttackCheck()
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
	if(DoingAttack==true && AttackScene==30)
	{
		DoingAttack=false;
		AttackScene=0;
	} // 공격모션 정지
	else if(DoingAttack==true)
	{
		AttackScene++;
	}//공격모션 중

	if(DoingAttack==true && AttackScene==24)
	{
		GoDamege=true;
	}
}
void cArcher:: Attack(cUnit* people)
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
void cArcher::Move()
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

	if(SceneDellay==100)
		SceneDellay=0;
	SceneDellay++;
	}
}
void cArcher::AttackUp(int Change){
	AttackDamege=15+Change*(AttackDamege/10);

}
void cArcher::ShieldUp(int Schange){
	shield=Schange;

}

















