#include "cPriest.h"

cPriest::cPriest(float initfX):cUnit()
{
	hp=45;
	shield=0;
	AttackDamege=10;
	AttackDellay=1500;
	AttackRange=50;
	AttackStyle=0;
	m_fX=initfX;
}
cPriest::~cPriest(void)
{
}
	
void cPriest::Render()
{
	switch(SceneNumber)
	{
	case 1:GetTexManager()->DrawTex(0,m_fX ,580 );break;
	case 2:GetTexManager()->DrawTex(1,m_fX ,580 );break;
	case 3:GetTexManager()->DrawTex(2,m_fX ,580 );break;
	case 4:GetTexManager()->DrawTex(3,m_fX ,580 );break;
	}
}
void cPriest:: Attack(cUnit people)
{
	if(people.GetX()<m_fX+AttackRange)
		people.Hurt(AttackDamege);
}
void cPriest::Move()
{
	m_fX+=5;

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
