
// RePrintCallExe.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRePrintCallExeApp:
// �йش����ʵ�֣������ RePrintCallExe.cpp
//

class CRePrintCallExeApp : public CWinAppEx
{
public:
	CRePrintCallExeApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CRePrintCallExeApp theApp;