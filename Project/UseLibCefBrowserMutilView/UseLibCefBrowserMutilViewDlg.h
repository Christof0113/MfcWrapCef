
// UseLibCefBrowserMutilViewDlg.h : ͷ�ļ�
//

#pragma once

#include "BrowserView.h"

// CUseLibCefBrowserMutilViewDlg �Ի���
class CUseLibCefBrowserMutilViewDlg : public CDialogEx
{
// ����
public:
	CUseLibCefBrowserMutilViewDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_USELIBCEFBROWSERMUTILVIEW_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

private:

	CBrowserView	m_browser_view_left;
	CBrowserView	m_browser_view_right;

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
