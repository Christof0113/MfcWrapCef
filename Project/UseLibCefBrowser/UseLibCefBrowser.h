
// UseLibCefBrowser.h : UseLibCefBrowser Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUseLibCefBrowserApp:
// �йش����ʵ�֣������ UseLibCefBrowser.cpp
//

class CUseLibCefBrowserApp : public CWinApp
{
public:
	CUseLibCefBrowserApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUseLibCefBrowserApp theApp;