#include "cEliteArcher.h"

cEliteArcher::cEliteArcher(float initfX):cUnit()
{
	hp=60;
	shield=1;
	AttackDamege=18;
	AttackDellay=60;
	AttackRange=150;
	AttackStyle=0;
	m_fX=initfX;
	AttackDel=60;
	DoingAttack=false;
	AttackScene=0;
	CanAttack=false;
	GoDamege=false;
	AttackStyle=0;
	Job=5;
	DeadScene=0;
	DeadMotion=false;
	AllTheEnd=false;
	MagicScene=0;
}
void cEliteArcher::Render()
{
	if(DeadMotion && hp<=0)
	{
		if(DeadScene>=0 && DeadScene<=10)
			GetTexManager()->DrawTex(158,m_fX ,450 );
		else if(DeadScene>=10 && DeadScene<=20)
			GetTexManager()->DrawTex(159,m_fX ,450 );
		else if(DeadScene>=20 && DeadScene<=30)
			GetTexManager()->DrawTex(160,m_fX+15 ,450 );
	}
	else if(DoingAttack==false)
	{
		switch(SceneNumber)
		{
		case 1:GetTexManager()->DrawTex(148,m_fX ,450 );break;
		case 2:GetTexManager()->DrawTex(149,m_fX ,450 );break;
		case 3:GetTexManager()->DrawTex(150,m_fX ,450 );break;
		case 4:GetTexManager()->DrawTex(151,m_fX ,450 );break;
		case 5:GetTexManager()->DrawTex(152,m_fX ,450 );break;
		case 6:GetTexManager()->DrawTex(153,m_fX ,450 );break;
		}
	}
	else
	{
		if(AttackScene>=0 && AttackScene<8)
			GetTexManager()->DrawTex(154,m_fX ,450 );
		else if(AttackScene>=8 && AttackScene<16)
			GetTexManager()->DrawTex(155,m_fX ,450 );
		else if(AttackScene>=16 && AttackScene<24)
			GetTexManager()->DrawTex(156,m_fX,450 );
		else if(AttackScene>=24 && AttackScene<32)
			GetTexManager()->DrawTex(157,m_fX,450);
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
void cEliteArcher:: AttackCheck()
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
void cEliteArcher:: Attack(cUnit* people)
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
			DoubleShot();
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
void cEliteArcher::Move()
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
void cEliteArcher::AttackUp(int Change){
	AttackDamege=18+Change*(AttackDamege/10);

}

void cEliteArcher::ShieldUp(int Schange){
	shield=1+Schange;

}





















