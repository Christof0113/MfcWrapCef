
// UseLibCefBrowserMutilView.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CUseLibCefBrowserMutilViewApp: 
// �йش����ʵ�֣������ UseLibCefBrowserMutilView.cpp
//

class CUseLibCefBrowserMutilViewApp : public CWinApp
{
public:
	CUseLibCefBrowserMutilViewApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CUseLibCefBrowserMutilViewApp theApp;