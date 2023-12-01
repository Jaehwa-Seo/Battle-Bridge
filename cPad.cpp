#include "cPad.h"
#include "time.h"
#include "stdlib.h"


cPad::cPad(bool startScene)
{
	WRONG=false;
	CORRECT=false;
	Cotime=0;
	Wrtime=0;
	Scene=1;
	PScene=0;
	StartScene=startScene;
	PadScene=0;
	srand(GetTickCount());
	quastionnum=rand()%10;
	GetSoundManager()->AddSound(1,"./Sound/爹悼大.wav");
	GetSoundManager()->AddSound(2,"./Sound/动.wav");
	GetTexManager()->AddTex(101,"./Image/background.png");
	GetTexManager()->AddTex(100,"./Image/巩力/Q1.png");
	GetTexManager()->AddTex(99,"./Image/巩力/Q2.png");
	GetTexManager()->AddTex(98,"./Image/巩力/Q3.png");
	GetTexManager()->AddTex(97,"./Image/巩力/Q4.png");
	GetTexManager()->AddTex(96,"./Image/巩力/Q5.png");
	GetTexManager()->AddTex(95,"./Image/巩力/Q6.png");
	GetTexManager()->AddTex(94,"./Image/巩力/Q7.png");
	GetTexManager()->AddTex(93,"./Image/巩力/Q8.png");
	GetTexManager()->AddTex(92,"./Image/巩力/Q9.png");
	GetTexManager()->AddTex(91,"./Image/巩力/Q10.png");
	GetTexManager()->AddTex(90,"./Image/巩力/o1.png");
	GetTexManager()->AddTex(89,"./Image/巩力/o2.png");
	GetTexManager()->AddTex(88,"./Image/巩力/x1.png");
	GetTexManager()->AddTex(87,"./Image/巩力/x2.png");
	GetTexManager()->AddTex(1,"./Image/1.png");
	GetTexManager()->AddTex(2,"./Image/2.png");
	GetTexManager()->AddTex(3,"./Image/3.png");
	GetTexManager()->AddTex(4,"./Image/4.png");
	GetTexManager()->AddTex(5,"./Image/5.png");
	GetTexManager()->AddTex(6,"./Image/6.png");
	GetTexManager()->AddTex(7,"./Image/7.png");
	GetTexManager()->AddTex(8,"./Image/8.png");
	GetTexManager()->AddTex(9,"./Image/9.png");
	GetTexManager()->AddTex(10,"./Image/10.png");

	switch(quastionnum)
	{
	case 0:correc=1;break;
	case 1:correc=1;break;
	case 2:correc=0;break;
	case 3:correc=1;break;
	case 4:correc=0;break;
	case 5:correc=1;break;
	case 6:correc=1;break;
	case 7:correc=0;break;
	case 8:correc=0;break;
	case 9:correc=0;break;
	}
}

cPad::~cPad(void)
{
	GetTexManager()->Clear();
	GetSoundManager()->Clear();
}

void cPad::RenderFrame()
{
	GetTexManager()->DrawTex(101,512,368);
	if(CORRECT)
	{
		GetSoundManager()->Play(1);
	}
	if(WRONG)
	{
		GetSoundManager()->Play(2);
	}
	if(StartScene==false)
	{
		switch(quastionnum)
		{
		case 0:GetTexManager()->DrawTex(100,512,368);break;
		case 1:GetTexManager()->DrawTex(99,512,368);break;
		case 2:GetTexManager()->DrawTex(98,512,368);break;
		case 3:GetTexManager()->DrawTex(97,512,368);break;
		case 4:GetTexManager()->DrawTex(96,512,368);break;
		case 5:GetTexManager()->DrawTex(95,512,368);break;
		case 6:GetTexManager()->DrawTex(94,512,368);break;
		case 7:GetTexManager()->DrawTex(93,512,368);break;
		case 8:GetTexManager()->DrawTex(92,512,368);break;
		case 9:GetTexManager()->DrawTex(91,512,368);break;
		}
		if(Scene==1)
			GetTexManager()->DrawTex(89,400,470);
		else 
			GetTexManager()->DrawTex(90,400,470);
		if(Scene==0)
			GetTexManager()->DrawTex(87,600,470);
		else 
			GetTexManager()->DrawTex(88,600,470);
	}
	else
	{
		switch(PScene)
		{
		case 1:GetTexManager()->DrawTex(1,512,368);break;
		case 2:GetTexManager()->DrawTex(2,512,368);break;
		case 3:GetTexManager()->DrawTex(3,512,368);break;
		case 4:GetTexManager()->DrawTex(4,512,368);break;
		case 5:GetTexManager()->DrawTex(5,512,368);break;
		case 6:GetTexManager()->DrawTex(6,512,368);break;
		case 7:GetTexManager()->DrawTex(7,512,368);break;
		case 8:GetTexManager()->DrawTex(8,512,368);break;
		case 9:GetTexManager()->DrawTex(9,512,368);break;
		case 10:GetTexManager()->DrawTex(10,512,368);break;
		}
	}
}
bool cPad::MoveFrame()
{
	if(IsKeyDown(DIK_RIGHT) && Scene==1)
		Scene=0;
	else if(IsKeyDown(DIK_LEFT) && Scene==1)
		Scene=0;
	else if(IsKeyDown(DIK_RIGHT) && Scene==0)
		Scene=1;
	else if(IsKeyDown(DIK_LEFT) && Scene==0)
		Scene=1;

	if(StartScene)
	{
		if((PadScene>=0 && PadScene<=3) )
			PScene=1;
		if((PadScene>=3 && PadScene<=6) || (PadScene>=51 && PadScene<=54))
			PScene=2;
		if((PadScene>=6 && PadScene<=9) || (PadScene>=48 && PadScene<=51))
			PScene=3;
		if((PadScene>=9 && PadScene<=12) || (PadScene>=45 && PadScene<=48))
			PScene=4;
		if((PadScene>=12 && PadScene<=15) || (PadScene>=42 && PadScene<=45))
			PScene=5;
		if((PadScene>=15 && PadScene<=18) || (PadScene>=39 && PadScene<=42))
			PScene=6;
		if((PadScene>=18 && PadScene<=21) || (PadScene>=36 && PadScene<=39))
			PScene=7;
		if((PadScene>=21 && PadScene<=24) || (PadScene>=33 && PadScene<=36))
			PScene=8;
		if((PadScene>=24 && PadScene<=27) || (PadScene>=30 && PadScene<=33) )
			PScene=9;
		if(PadScene>=27 && PadScene<=30)
			PScene=10;
		PadScene++;
		if(PadScene==54)
			PadScene=0;
		if(IsKeyDown(DIK_RETURN))
			StartScene=false;
	}
	else
	{
		if(IsKeyDown(DIK_RETURN))
		{
			if(Scene==correc)
			{
				CORRECT=true;
			}
			else
			{
				WRONG=true;
			}
		}
	}
	if(CORRECT)
		Cotime++;
	if(WRONG)
		Wrtime++;
	if(Cotime==130)
	{
		GetSceneManager()->DeleteFrontScene();
		GetSceneManager()->AddSceneToFront( new cMain() );

		return SCENE_CHANGE;
	}
	if(Wrtime==75)
	{
		GetSceneManager()->DeleteFrontScene();
		GetSceneManager()->AddSceneToFront( new cPad(false) );

		return SCENE_CHANGE;
	}
	return 0;
}