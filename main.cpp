#include "cDirectApplication.h"
#include "Logger.h"
#include "cValStorage.h"
#include "cMain.h"
#include "cStart.h"
#include "cLose.h"
#include "cWin.h"

INT WINAPI wWinMain( HINSTANCE hInst, HINSTANCE, LPWSTR, INT )
{	
	InitLogger();
	cValStorage *ValStorage = new cValStorage();
	cDirectApplication *Application = new cDirectApplication(L"Battle Bridge 2.0", 1024, 768);
	
	// 프로그램 진입점 설정
	GetSceneManager()->AddSceneToFront(new cStart(true));

	// 메세지루프 시작
	Application->RunMessageLoop();

	delete Application;
	delete ValStorage;

	return 0;
}