#include "Stdafx.h"
#include "GameClient.h"
#include "GameClientDlg.h"
#include "GameFrameWindow.h"

//////////////////////////////////////////////////////////////////////////

//程序对象
CGameClientApp theApp;

//////////////////////////////////////////////////////////////////////////

//构造函数
CGameClientApp::CGameClientApp()
{
}

//析构函数
CGameClientApp::~CGameClientApp()
{
}

//创建框架
CGameFrameWnd * CGameClientApp::GetGameFrameWnd()
{
	return (CGameFrameWnd *)new CGameFrameWindow();
}

//创建引擎
CGameFrameEngine * CGameClientApp::GetGameFrameEngine(DWORD dwSDKVersion)
{
	//版本检测
	if (InterfaceVersionCompare(VERSION_FRAME_SDK,dwSDKVersion)==false) return NULL;


	//创建引擎
	return new CGameClientEngine;
}

//////////////////////////////////////////////////////////////////////////
