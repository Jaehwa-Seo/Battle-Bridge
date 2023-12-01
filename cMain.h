#pragma once
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cTexture.h"
#include "windows.h"
#include "cWin.h"
#include "cLose.h"
#include "cFont.h"

#include "cUnit.h"

#include "cWarrior.h"
#include "cArcher.h"
#include "cMagician.h"
#include "cColdWizard.h"
#include "cDefender.h"
#include "cEliteArcher.h"
#include "cFireMagician.h"
#include "cSniper.h"
#include "cSwordmaster.h"
#include "cValStorage.h"
#include "cEnemyWarrior.h"
#include "cEnemyArcher.h"
#include "cEnemyMagician.h"
#include "cEnemyColdWizard.h"
#include "cEnemyDefender.h"
#include "cEnemyEliteArcher.h"
#include "cEnemyFireMagician.h"
#include "cEnemySniper.h"
#include "cEnemySwordmaster.h"
#include "cCastle.h"
#include "cEnemyCastle.h"


class cMain : virtual public SceneNode
{
private:
	cTexture m_Tex;
	cUnit *people[16];
	cUnit *enemypeople[16];
	cFont *M,*S,*C,*EC;

	int Warriorcool;
	int Archercool;
	int Magiciancool;
	int Priestcool;
	int EnemyWarriorcool;
	int EnemyArchercool;
	int EnemyMagiciancool;
	
	int Defendercool;
	int Swordmastercool;
	int Snipercool;
	int a,b;
	int EnemyWarrior;
	int EnemyArcher;
	int EnemyMagician;
	
	int Warrior;
	int Archer;
	int Magician;
	int Priest;

	int MoneyUp;
	int CastleUp;
	int AttackUp;
	int EnemyAttackUp;
	int ShieldUp;
	int EnemyShieldUp;
	int SpeedUp;

	int check;
	int Enemygold;
	int gold;
	int golddel;
	int UpgradeScene;

	char money[20];
	char supply[20];
	char enemycasstle[20];	
	char casstle[20];

	float MapX;
	float MapY;
	float first_fX;
	float EndofMove_X; //이동가능한 마지막 좌표값
	float Enemyfirst_fX;
	float EnemyEndofMove_X;
	float BeforemyUnit_fX; //2명을 이동할때 앞에 우리팀이 있는지 없는지 확인
	float BeforeEnemyUnit_fX;
	int BeforeJob;
	bool EnemyUnitIt; 
	int EnemyUnitCount;
	bool MyUnitIt;
	int MyUnitCount;
	float WarriorCoolX;
	RECT RectWarriorCool;
	float ArcherCoolX;
	RECT RectArcherCool;
	float MagicianCoolX;
	RECT RectMagicianCool;
	float PriestCoolX;
	RECT RectPriestCool;
	float DefenderCoolX;
	RECT RectDefenderCool;
	float SwordmasterCoolX;
	RECT RectSwordmasterCool;
	float SniperCoolX;
	RECT RectSniperCool;

public:
	cMain(void);
	virtual ~cMain(void);
	virtual bool MoveFrame();
	virtual void RenderFrame();
};
