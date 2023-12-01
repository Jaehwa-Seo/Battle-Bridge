#include "cDirectApplication.h"
#include "cValStorage.h"

cDirectApplication::cDirectApplication(wchar_t *szWindowName, int nWidth, int nHeight) : cApplication(szWindowName, nWidth, nHeight)
{
	GetValStorage()->SetVal(&m_pD3D);
	GetValStorage()->SetVal(&m_pd3dDevice);
	GetValStorage()->SetVal(&m_pd3dSprite);

	// DirectX ���� ���� �ʱ�ȭ
	m_pD3D = NULL;
	m_pd3dDevice = NULL;
	m_pd3dSprite = NULL;
	m_fFPS = 0;

	// Direct3D �ʱ�ȭ
	if( NULL == ( m_pD3D = Direct3DCreate9( D3D_SDK_VERSION ) ) )
	{
		LogData("Direct3D ��ü ���� ����");
		return;
	}

	ZeroMemory( &m_d3dpp, sizeof( m_d3dpp ) );
	m_d3dpp.Windowed               = HGIsWindowMode();			           // FullScreen/Window���
	m_d3dpp.SwapEffect             = D3DSWAPEFFECT_DISCARD;     // Back-Buffer ��üȿ�� ����
	m_d3dpp.BackBufferFormat       = D3DFMT_X8R8G8B8;           // Back-Buffer ���� ����
	m_d3dpp.BackBufferWidth        = nWidth;                     // ���� ���� ����.
	m_d3dpp.BackBufferHeight       = nHeight;                    // ���� ���� ����.
	m_d3dpp.BackBufferCount        = 1;                         // Back-Buffer ���� ����.

	if( FAILED( m_pD3D->CreateDevice( D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, HGGetHWnd(),
		D3DCREATE_SOFTWARE_VERTEXPROCESSING,
		&m_d3dpp, &m_pd3dDevice ) ) )
	{
		LogData("Direct3D Device ���� ����");
		return;
	}

	m_pd3dDevice->SetRenderState( D3DRS_ALPHABLENDENABLE,   TRUE );
	m_pd3dDevice->SetRenderState( D3DRS_SRCBLEND,  D3DBLEND_SRCALPHA );
	m_pd3dDevice->SetRenderState( D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA );
	m_pd3dDevice->SetRenderState( D3DRS_ALPHATESTENABLE, TRUE );
	m_pd3dDevice->SetRenderState( D3DRS_ALPHAREF,        0x08 );
	m_pd3dDevice->SetRenderState( D3DRS_ALPHAFUNC, D3DCMP_GREATEREQUAL );
	m_pd3dDevice->SetRenderState( D3DRS_LIGHTING, false );

	if( FAILED(D3DXCreateSprite(m_pd3dDevice, &m_pd3dSprite)) )
	{
		LogData("Sprite ��ü ���� ����");
		return;
	}

	cSourceVoice::InitXAudio2();

	m_pTexManager = new cTexManager();
	m_pSceneManager = new cSceneManager();
}

cDirectApplication::~cDirectApplication(void)
{
	SAFE_DELETE( m_pSceneManager );
	SAFE_DELETE( m_pTexManager );

	if( m_pd3dSprite != NULL)
		m_pd3dSprite->Release();

    if( m_pd3dDevice != NULL )
        m_pd3dDevice->Release();

    if( m_pD3D != NULL )
        m_pD3D->Release();
}

VOID cDirectApplication::Render()
{
	// ȭ���� �����ؾ� �ϴ� ���
    if( FAILED(m_pd3dDevice->TestCooperativeLevel()) )
		m_pd3dDevice->Reset(&m_d3dpp);

	// �ĸ� ���۸� ������
	m_pd3dDevice->Clear( 0, NULL, D3DCLEAR_TARGET, D3DCOLOR_XRGB( 255, 255, 255 ), 1.0f, 0 );

	// ������ ����
	if( SUCCEEDED( m_pd3dDevice->BeginScene() ) )
	{
		m_pd3dSprite->Begin(D3DXSPRITE_ALPHABLEND);

		m_pSceneManager->RenderAllFrame();

		m_pd3dSprite->End();

		m_pd3dDevice->EndScene();
	}

	// �۾��� �ĸ� ���۸� ���̴� ȭ������ ��ȯ
	m_pd3dDevice->Present( NULL, NULL, NULL, NULL );
}

void cDirectApplication::RunMessageLoop()
{
	MSG msg;
	ZeroMemory(&msg, sizeof(MSG));
	while( msg.message != WM_QUIT )
	{
		if( PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE ) )
		{
			TranslateMessage( &msg );
			DispatchMessage( &msg );
		}
		else
		{
			CalculateFPS();
			m_DirectInput.Read();
			m_pSceneManager->MoveAllFrame();
			Render();
		}
	}
}

void cDirectApplication::CalculateFPS()
{
	static int nStartTime = GetTickCount();
	static int nFrameCnt;

	int nTimeElapsed = GetTickCount() - nStartTime;
	nFrameCnt++;

	if(nTimeElapsed >= 1000)
	{
		m_fFPS = (float)nFrameCnt*1000 / nTimeElapsed;

		nStartTime = GetTickCount();
		nFrameCnt = 0;
	}
}