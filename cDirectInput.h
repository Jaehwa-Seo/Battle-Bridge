#pragma once

#include <d3d9.h>
#include <d3dx9.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
//#include "cApplication.h"
#include "Singleton.h"

#define DIRECTINPUT

#define KEYDOWN(name, key) ((name[key]) & (0x80)) 

class cApplication;

enum GETKEYSTATE_PARAMETER
{
	KEY_DOWN,
	KEY_PRESSED,
	KEY_UP,
};
enum GETBUTTONSTATE_PARAMETER
{
	BUTTON_LEFT,
	BUTTON_RIGHT,
	BUTTON_WHEEL,
};
class cDirectInput : public Singleton<cDirectInput>
{
private :	
	IDirectInput8*		 m_DirectInput; 

	IDirectInputDevice8* m_Keyboard;
	IDirectInputDevice8* m_Mouse;
	char				 m_KeyBuffer[256];
	bool				 m_KeyFlag[256];  

	DIMOUSESTATE		 m_MouseBuffer;
	bool				 m_MouseFlag[4];
	POINT				 m_MousePos;
	D3DXVECTOR2			 m_fMousePos;
	HANDLE				 m_MouseEvent;

	void _SetKeyFlags();
	void _SetMouseFlags();

public:
	cDirectInput();
	~cDirectInput(void);

	bool InitKeyboard();
	bool InitMouse();
	bool InitDirectInput();
	bool ReadKeyboard();
	bool ReadMouse();
	bool Read();

	int IsAnyKeyPressed(); 
	
	bool GetKeyState(DWORD p_Key,int p_Flag);
	bool GetButtonState(DWORD p_Button,int p_Flag);

	POINT* GetMousePoint() { return &m_MousePos;}
	D3DXVECTOR2* GetfMousePoint();
	
	long GetMouseXDelta() { return m_MouseBuffer.lX; }
	long GetMouseYDelta() { return m_MouseBuffer.lY; }
	long GetMouseZDelta() { return m_MouseBuffer.lZ; }
	long GetMouseXPos() { return m_MousePos.x;}
	long GetMouseYPos() { return m_MousePos.y;}
};


cDirectInput* DIRECTINPUT GetDirectInput();

long DIRECTINPUT GetMouseXDelta();
long DIRECTINPUT GetMouseYDelta();
long DIRECTINPUT GetMouseZDelta();
long DIRECTINPUT GetMouseXPos();
long DIRECTINPUT GetMouseYPos();

bool DIRECTINPUT IsKeyDown(DWORD p_Key);
bool DIRECTINPUT IsKeyPressed(DWORD p_Key);
bool DIRECTINPUT IsKeyUp(DWORD p_Key);

bool DIRECTINPUT IsButtonDown(DWORD p_Button);
bool DIRECTINPUT IsButtonPressed(DWORD p_Button);
bool DIRECTINPUT IsButtonUp(DWORD p_Button);

bool DIRECTINPUT ReadInputData();