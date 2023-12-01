#include "Unit.h"

Unit::Unit(float initfX)
{
	hp = 10;
	IsNeed=true;
	m_fX=initfX;
	SceneNumber=9;
	SceneDellay=0;
}

Unit::~Unit(void)
{
}

int Unit::Get_HP()
{
	return hp;
}

void Unit::Move()
{
	m_fX-=5;
	

	/*if(m_fX<=last_fX && m_fX+25<=m_fx)
	{
		
	}
	else if(m_fX<=last_fX)
	{
		m_fX=m_fx-25;
		SceneNumber=2;
		SceneDellay=0;
	}*/
	if(SceneDellay>=0 && SceneDellay<=20)
		SceneNumber=9;
	else if(SceneDellay>=21 && SceneDellay<=40)
		SceneNumber=10;
	else if(SceneDellay>=41 && SceneDellay<=60)
		SceneNumber=11;
	if(SceneDellay==120)
		SceneDellay=0;
	SceneDellay++;
} //좌표에 스피드만큼 플러스 해준다.

void Unit::Attack(int* ehp,int eshield) //적의 x좌표를 받음
{
	*ehp-=(AttackDamege-eshield);
	if(SceneDellay>=0 && SceneDellay<=20)
		SceneNumber=1;
	else if(SceneDellay>=21 && SceneDellay<=40)
		SceneNumber=2;

} // 공격 함수 

/*bool cUnit::CrashChack(int e_fX)
{
	if(e_fX-25<=m_fX+AttackRange)
		true;
	else 
		return false;
} //충돌 처리 함수
*/void Unit::Dead()
{
	IsNeed=false;
}