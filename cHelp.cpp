#include "cHelp.h"


cHelp::cHelp(void)
{
	Scene=0;
	GetTexManager()->AddTex(99,"./Image/설명1.png");
	GetTexManager()->AddTex(98,"./Image/설명2.png");
	GetTexManager()->AddTex(97,"./Image/설명3.png");
	GetTexManager()->AddTex(96,"./Image/설명4.png");
	GetTexManager()->AddTex(95,"./Image/설명5.png");

}

cHelp::~cHelp(void)
{
	GetTexManager()->Clear();
	GetSoundManager()->Clear();
}

void cHelp::RenderFrame()
{
	if(Scene==0)
		GetTexManager()->DrawTex(99,512,368);
	else if(Scene==1)
		GetTexManager()->DrawTex(98,512,368);
	else if(Scene==2)
		GetTexManager()->DrawTex(97,512,368);
	else if(Scene==3)
		GetTexManager()->DrawTex(96,512,368);
	else if(Scene==4)
		GetTexManager()->DrawTex(95,512,368);
}

bool cHelp::MoveFrame()
{
	switch(Scene)
	{
	case 0:
		{
			if(IsKeyDown(DIK_RIGHT))
				Scene=1;
			else if(IsKeyDown(DIK_LEFT))
				Scene=0;
			break;
		}
	case 1:
		{
			if(IsKeyDown(DIK_RIGHT))
				Scene=2;
			else if(IsKeyDown(DIK_LEFT))
				Scene=0;break;
		}
	case 2:
		{
			if(IsKeyDown(DIK_RIGHT))
				Scene=3;
			else if(IsKeyDown(DIK_LEFT))
				Scene=1;break;
		}
		case 3:
		{
			if(IsKeyDown(DIK_RIGHT))
				Scene=4;
			else if(IsKeyDown(DIK_LEFT))
				Scene=2;break;
		}
		case 4:
		{
			 if(IsKeyDown(DIK_LEFT))
				Scene=3;break;
		}
	}
	return 0;
}