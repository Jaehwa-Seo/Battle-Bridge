#include "cWin.h"


cWin::cWin(void)
{
	Scene=0;
	GetSoundManager()->AddSound(1,"./Sound/Victory!.wav");
	GetTexManager()->AddTex(100,"./Image/background.png");
	GetTexManager()->AddTex(99,"./Image/win.png");
	GetTexManager()->AddTex(98,"./Image/메인으로2.png");
}

cWin::~cWin(void)
{
	GetTexManager()->Clear();
	GetSoundManager()->Clear();
}

void cWin::RenderFrame()
{
	GetTexManager()->DrawTex(100,512,368);
	GetTexManager()->DrawTex(99,512,340);
	GetTexManager()->DrawTex(98,512,500);
	GetSoundManager()->Play(1);
}

bool cWin::MoveFrame()
{
	if(GetMouseXPos()>=337 && GetMouseXPos()<=687 && GetMouseYPos()>=425 && GetMouseYPos()<=575 && IsButtonDown(0))
	{
		GetSceneManager()->DeleteFrontScene();
		GetSceneManager()->AddSceneToFront( new cStart(false) );

		return SCENE_CHANGE;

	}
	return 0;
}