#pragma once
#include "Logger.h"

class cUnit
{
protected:
	int hp; //ü��
	int shield; //����
	int AttackDamege; //���ݷ�
	int AttackDellay; //������ �������ݱ����� ������
	int AttackRange; //�����Ÿ�
	int AttackDel;
	int AttackScene;
	int SceneNumber;
	int SceneDellay;
	int DeadScene;
	int MagicScene;
	int CriticalScene;
	int IceScene;
	int FireScene;
	int Job; //������� 0 ���Ĵ� 1 ������� 2 ������Ʈ�� 3
	float Dead_fX;
	float m_fX; //�̵��ϴ� ��ǥ
	float m_fY; //�׸� ����ϴ� ��ǥ
	float last_fX;
	bool IsNeed; //������ ����ֳ� �׾��� �Ǵ�
	bool AttackStyle; //�ٰŸ��� 1 ���Ÿ��� 2
	bool DoingAttack;
	bool CanAttack;
	bool speed;
	bool GoDamege;
	bool DeadMotion;
	bool Blood;
	bool AllTheEnd;
	bool Magic;
	bool Critical;
	bool Double;
	bool Block;
	bool HeadShot;
	bool Fire;
	bool Frozen;
	bool Fireattack;
	bool Iceattack;
	int chance;
public:
	cUnit();
	
	int Return_HP() {return hp;}
	bool Return_CanAttack() { return CanAttack;}
	int GetSceneNumber() {return SceneNumber;}
	int Return_AttackRange() { return AttackRange; }
	int Return_Job() {return Job;}
	
	float GetX() {return m_fX;}
	bool GetIsNeed() {return IsNeed;}
	bool GetStyle() {return AttackStyle;}
	bool GetArrow() {return GoDamege;}
	bool GetDead() {return DeadMotion;}
	void Speed(int a); 
	bool GetAllTheEnd() { return AllTheEnd;}
	void Maxhp(int a){hp=hp+a;}
	void MouseRightMove() {m_fX-=10;}
	void MouseLeftMove() {m_fX+=10;}
	void Dead();
	void ArrowShot() {GoDamege=false;}
	virtual void Hurt(int AttackDamege);
	void Bleeding() {Blood=true;}
	void MagicHit() { Magic=true;}
	void CriticalHit() {Critical=true;}
	void DoubleShot() {Double=true;}
	void Headshot() {HeadShot=true;}
	void IceAttack() {Iceattack=true;}
	void FireAttack() {Fireattack=true;}
	void Froze() {Frozen=true;}
	void fire() {Fire=true;}
	virtual void AttackUp(int Change)=0;
	virtual void ShieldUp(int Schange)=0;
	virtual void AttackCheck()=0;
	virtual void Render()=0;
	virtual void Attack(cUnit * people)=0;
	virtual void Move()=0;
};
