#pragma once
#include "stdafx.h"

class CTaskBase;
class CPoolThread
{
public:
	CPoolThread();
	~CPoolThread();
	void ResumeThread();
	void SuspendThread();
	static DWORD WINAPI WorkThread(LPVOID);
	BOOL AttchTask(CTaskBase * pTask);
	BOOL IsBusy();
private:
	CTaskBase *m_pTask;
	HANDLE  m_hThread;
	DWORD   m_dWThreadID;
};