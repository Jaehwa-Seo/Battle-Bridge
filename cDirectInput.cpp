#include <time.h>
#include "cValStorage.h"
#include "cDirectInput.h"
#include "Macro.h"
#include "Logger.h"

#pragma warning( disable : 4800 )
cDirectInput::cDirectInput()
{
	ZeroMemory(this, sizeof(cDirectInput));

	SetFocus(HGGetHWnd());
	InitKeyboard();
	InitMouse();
}

cDirectInput::~cDirectInput(void)
{
	SAFE_RELEASE( m_Mouse );
	SAFE_RELEASE( m_Keyboard );
	SAFE_RELEASE( m_DirectInput );
}
bool cDirectInput::InitKeyboard()
{
	if(FAILED(DirectInput8Create(HGGetHInstance(), DIRECTINPUT_VERSION, 
		IID_IDirectInput8, (void**)&m_DirectInput, NULL)))  
	{ 
		LogData("DirectInput8 생성 실패"); 
		return false;
	} 
	if(FAILED(m_DirectInput->CreateDevice(GUID_SysKeyboard, &m_Keyboard, NULL)))
	{
		LogData("Keyboard Device 생성 실패");
		return false;
	} 
	if(FAILED(m_Keyboard->SetDataFormat(&c_dfDIKeyboard)))
	{
		LogData("Keyboard SetDataFormat 설정 실패");
		return false;
	}
	if(FAILED(m_Keyboard->SetCooperativeLevel(HGGetHWnd(), DISCL_FOREGROUND | DISCL_NONEXCLUSIVE)))
	{
		LogData("KeyBoard SetCooperativeLevel 설정 실패");
		return false;
	}
	if(m_Keyboard)
		m_Keyboard->Acquire();
	return true;
}

bool cDirectInput::InitMouse()
{
	if( FAILED(m_DirectInput->CreateDevice(GUID_SysMouse, &m_Mouse, NULL)) )
	{
		LogData("Mouse CreateDevice 실패");
		return false;
	}

	if( FAILED(m_Mouse->SetDataFormat(&c_dfDIMouse)) )
	{
		LogData("Mouse SetDataFormat 실패");
		return false;
	}

	if( FAILED(m_Mouse->SetCooperativeLevel(HGGetHWnd(), DISCL_FOREGROUND | DISCL_NONEXCLUSIVE)) )
	{
		LogData("Mouse SetCooperativeLevel 설정 실패");
		return false;
	}
	/** 마우스 입력에 변화가 생기면 이벤트가 호출되게 해놓음. **/
	if( FAILED(m_Mouse->SetEventNotification(m_MouseEvent)))
	{
		LogData("Mouse 이벤트 설정 실패");
		return false;
	}
	m_Mouse->Acquire();
	return true;
}

void cDirectInput::_SetKeyFlags()
{
	for(int i=0;i<256;i++)
	{
		m_KeyFlag[i] = (bool)(KEYDOWN(m_KeyBuffer,i));
	}
}

bool cDirectInput::ReadKeyboard()
{
	_SetKeyFlags();

	m_Keyboard->Acquire();
	
	HRESULT hr = m_Keyboard->GetDeviceState(sizeof(m_KeyBuffer),(void*)&m_KeyBuffer); 
	if(FAILED(hr))
	{
		if(hr == DIERR_INPUTLOST || hr == DIERR_NOTACQUIRED)
		{
			return FALSE;
			LogData("Get Device State 실패");
		}
		return false;
	}
	return true;
}
void cDirectInput::_SetMouseFlags()
{
	for(int i=0;i<4;i++)
	{
		m_MouseFlag[i] = (bool)(m_MouseBuffer.rgbButtons[i]);
	}
}
bool cDirectInput::ReadMouse()
{
	_SetMouseFlags();

	m_Mouse->Acquire();

	GetCursorPos(&m_MousePos);
	if(HGIsWindowMode())  //창모드일때만 해야함. 아니면 마우스 좌표에 오차가 생김 
	{
		ScreenToClient(HGGetHWnd(), &m_MousePos);
	}	

	HRESULT hr = m_Mouse->GetDeviceState(sizeof(DIMOUSESTATE),&m_MouseBuffer);
	if(FAILED(hr))
	{
		if(hr == DIERR_INPUTLOST)
			LogData("Read Mouse 실패");
		return false;
	}

	return true;
}

bool cDirectInput::Read()
{
	bool h1 = ReadKeyboard();
	bool h2 = ReadMouse();
	return h1&&h2;
}
bool cDirectInput::GetKeyState(DWORD p_Key,int p_Flag)
{
	switch(p_Flag)
	{
		case KEY_DOWN :
			return (m_KeyFlag[p_Key]==false)&&KEYDOWN(m_KeyBuffer,p_Key);
		case KEY_PRESSED : 
			return KEYDOWN(m_KeyBuffer,p_Key);
		case KEY_UP:
			return (m_KeyFlag[p_Key])&&(KEYDOWN(m_KeyBuffer,p_Key)==false);
	}
	return false;
}
int cDirectInput::IsAnyKeyPressed()
{
	for(int i=0;i<256;i++)
	{
		if(KEYDOWN(m_KeyBuffer,i))
			return i; 
	}
	return -1;
}

bool cDirectInput::GetButtonState(DWORD p_Button,int p_flags) 
{
	if(p_Button>4)
		return false;
	switch(p_flags)
	{
		case KEY_DOWN :
			return ( !m_MouseFlag[p_Button] && m_MouseBuffer.rgbButtons[p_Button] );
		case KEY_PRESSED : 
			return m_MouseBuffer.rgbButtons[p_Button];
		case KEY_UP:
			return ( m_MouseFlag[p_Button] && !m_MouseBuffer.rgbButtons[p_Button]);
	}
	return false;
}

D3DXVECTOR2* cDirectInput::GetfMousePoint()
{
	m_fMousePos.x = (float)m_MousePos.x;
	m_fMousePos.y = (float)m_MousePos.y;
	return &m_fMousePos;
}
cDirectInput* DIRECTINPUT GetDirectInput() { return cDirectInput::GetSingleton(); }

long DIRECTINPUT GetMouseXDelta() { return cDirectInput::GetSingleton()->GetMouseXDelta(); }
long DIRECTINPUT GetMouseYDelta() { return cDirectInput::GetSingleton()->GetMouseYDelta(); }
long DIRECTINPUT GetMouseZDelta() { return cDirectInput::GetSingleton()->GetMouseZDelta(); }
long DIRECTINPUT GetMouseXPos()	  { return cDirectInput::GetSingleton()->GetMouseXPos();   }
long DIRECTINPUT GetMouseYPos()	  { return cDirectInput::GetSingleton()->GetMouseYPos();   }

bool DIRECTINPUT IsKeyDown(DWORD p_Key)		{ return cDirectInput::GetSingleton()->GetKeyState(p_Key, KEY_DOWN) ;}
bool DIRECTINPUT IsKeyPressed(DWORD p_Key)  { return cDirectInput::GetSingleton()->GetKeyState(p_Key, KEY_PRESSED); }
bool DIRECTINPUT IsKeyUp(DWORD p_Key)	    { return cDirectInput::GetSingleton()->GetKeyState(p_Key, KEY_UP); }

bool DIRECTINPUT IsButtonDown(DWORD p_Button)	 { return cDirectInput::GetSingleton()->GetButtonState(p_Button,KEY_DOWN); }
bool DIRECTINPUT IsButtonPressed(DWORD p_Button) { return cDirectInput::GetSingleton()->GetButtonState(p_Button,KEY_PRESSED); }
bool DIRECTINPUT IsButtonUp(DWORD p_Button)		 { return cDirectInput::GetSingleton()->GetButtonState(p_Button,KEY_UP); }

bool DIRECTINPUT ReadInputData() { return cDirectInput::GetSingleton()->Read(); }