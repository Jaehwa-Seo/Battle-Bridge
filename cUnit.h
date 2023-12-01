#pragma once
#include "Logger.h"

class cUnit
{
protected:
	int hp; //체력
	int shield; //방어력
	int AttackDamege; //공격력
	int AttackDellay; //공격후 다음공격까지의 딜레이
	int AttackRange; //사정거리
	int AttackDel;
	int AttackScene;
	int SceneNumber;
	int SceneDellay;
	int DeadScene;
	int MagicScene;
	int CriticalScene;
	int IceScene;
	int FireScene;
	int Job; //워리어는 0 아쳐는 1 마법사는 2 프리스트는 3
	float Dead_fX;
	float m_fX; //이동하는 좌표
	float m_fY; //그림 출력하는 좌표
	float last_fX;
	bool IsNeed; //유닛이 살아있나 죽었나 판단
	bool AttackStyle; //근거리면 1 원거리면 2
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
