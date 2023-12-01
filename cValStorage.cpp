#include "cValStorage.h"

cValStorage* GetValStorage() { return cValStorage::GetSingleton(); }

HINSTANCE HGGetHInstance() { return GetValStorage()->GetHInstance(); }
HWND HGGetHWnd() { return GetValStorage()->GetHWnd(); }
bool HGIsWindowMode() { return GetValStorage()->IsWindowMode(); }

LPDIRECT3D9 HGGetD3D() { return GetValStorage()->GetD3D(); }
LPDIRECT3DDEVICE9 HGGetDevice() { return GetValStorage()->GetDevice(); }
LPD3DXSPRITE HGGetSprite() { return GetValStorage()->GetSprite(); }
float HGGetFPS() { return GetValStorage()->GetFPS(); }