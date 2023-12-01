#include "cStart.h"
#include "Logger.h"
#include "cMain.h"
#include "cHelp.h"

cStart::cStart(bool pad)
{
	Scene=0;
	GetTexManager()->AddTex(99,"./Image/START.png");
	GetTexManager()->AddTex(98,"./Image/HELP.png");
	GetTexManager()->AddTex(97,"./Image/EXIT.png");
	p=pad;
}

cStart::~cStart(void)
{
	GetTexManager()->Clear();
	GetSoundManager()->Clear();
}

void cStart::RenderFrame()
{
	if(Scene==0)
		GetTexManager()->DrawTex(99,512,368);
	else if(Scene==1)
		GetTexManager()->DrawTex(98,512,368);
	else if(Scene==2)
		GetTexManager()->DrawTex(97,512,368);
}

bool cStart::MoveFrame()
{
	switch(Scene)
	{
	case 0:
		{
			if(IsKeyDown(DIK_UP))
				Scene=2;
			else if(IsKeyDown(DIK_DOWN))
				Scene=1;
			if( IsKeyDown(DIK_RETURN) && p)
			{
			/*-	GetSceneManager()->DeleteFrontScene();
				GetSceneManager()->AddSceneToFront( new cPad(true) );

				return SCENE_CHANGE;*/
			}
			if(IsKeyDown(DIK_RETURN))
			{
				GetSceneManager()->DeleteFrontScene();
				GetSceneManager()->AddSceneToFront( new cMain() );

				return SCENE_CHANGE;
			}
			break;
		}
	case 1:
		{
			if(IsKeyDown(DIK_UP))
				Scene=0;
			else if(IsKeyDown(DIK_DOWN))
				Scene=2;
			if( IsKeyDown(DIK_RETURN) )
			{
				GetSceneManager()->DeleteFrontScene();
				GetSceneManager()->AddSceneToFront( new cHelp() );

				return SCENE_CHANGE;
			}break;
		}
	case 2:
		{
			if(IsKeyDown(DIK_UP))
				Scene=1;
			else if(IsKeyDown(DIK_DOWN))
				Scene=0;
			if( IsKeyDown(DIK_RETURN) )
			{
				exit(0);
			}break;
		}
	}
	return 0;
}