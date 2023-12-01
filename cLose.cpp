#include "cLose.h"


cLose::cLose(void)
{
	Scene=0;
	GetTexManager()->AddTex(100,"./Image/background.png");
	GetTexManager()->AddTex(99,"./Image/lose.png");
	GetTexManager()->AddTex(98,"./Image/메인으로2.png");
}

cLose::~cLose(void)
{
	GetTexManager()->Clear();
	GetSoundManager()->Clear();
}

void cLose::RenderFrame()
{
	GetTexManager()->DrawTex(100,512,368);
	GetTexManager()->DrawTex(99,512,340);
	GetTexManager()->DrawTex(98,512,500);
}

bool cLose::MoveFrame()
{
	if(GetMouseXPos()>=337 && GetMouseXPos()<=687 && GetMouseYPos()>=425 && GetMouseYPos()<=575 && IsButtonDown(0))
	{
		GetSceneManager()->DeleteFrontScene();
		GetSceneManager()->AddSceneToFront( new cStart(false) );

		return SCENE_CHANGE;

	}
	return 0;
}