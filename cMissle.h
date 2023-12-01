#pragma once
#include "Logger.h"
#include "cUnit.h"
class cMissle
{
protected:
	float fX;
	int AttackDamege;
	bool IsNeed;
	bool Bomb;
	int Scene;
public:
	cMissle();
	bool GetIsNeed() {return IsNeed;}
	bool GetBomb() {return Bomb;}
	void MouseRightMove() {fX-=10;}
	void MouseLeftMove() {fX+=10;}
	float GetX() {return fX;}
	int Retutn_Damege() { return AttackDamege;}
	void Gone() { IsNeed=false;}
	virtual void Move()=0;
	virtual void Render()=0;
};
