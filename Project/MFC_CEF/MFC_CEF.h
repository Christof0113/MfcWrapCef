
// MFC_CEF.h : MFC_CEF Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC_CEFApp:
// �йش����ʵ�֣������ MFC_CEF.cpp
//

class CMFC_CEFApp : public CWinApp
{
public:
	CMFC_CEFApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_CEFApp theApp;
