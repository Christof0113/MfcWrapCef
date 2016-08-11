// BrowserView.h : CBrowserView ��Ľӿ�
//
#pragma once

#include <string>
#include <memory>

// CBrowserView ����
class BrowserI;
class EmbededBrowser;
class CBrowserView : public CWnd
{
// ����
public:
	CBrowserView(const std::string& start_url);
private:
	std::string						m_titile;
	std::string						m_start_url;
	std::unique_ptr<EmbededBrowser>	m_browser_proxy;

// ����
public:
	std::string GetTitile();
// ����
public:
	BrowserI& GetBrowserI();

// ��д
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ʵ��
public:
	virtual ~CBrowserView();

	// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
	afx_msg LRESULT OnCefTitleChange(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnCefAfterCreated(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnCefDoClose(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnCefBeforeclose(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnCefLoaderror(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnCefLoadEnd(WPARAM wParam, LPARAM lParam);

public:
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnClose();
	afx_msg void OnMove(int x, int y);
	afx_msg void OnMoving(UINT fwSide, LPRECT pRect);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);

public:
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	virtual BOOL DestroyWindow();
};

