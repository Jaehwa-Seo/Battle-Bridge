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
} //��ǥ�� ���ǵ常ŭ �÷��� ���ش�.

void Unit::Attack(int* ehp,int eshield) //���� x��ǥ�� ����
{
	*ehp-=(AttackDamege-eshield);
	if(SceneDellay>=0 && SceneDellay<=20)
		SceneNumber=1;
	else if(SceneDellay>=21 && SceneDellay<=40)
		SceneNumber=2;

} // ���� �Լ� 

/*bool cUnit::CrashChack(int e_fX)
{
	if(e_fX-25<=m_fX+AttackRange)
		true;
	else 
		return false;
} //�浹 ó�� �Լ�
*/void Unit::Dead()
{
	IsNeed=false;
}