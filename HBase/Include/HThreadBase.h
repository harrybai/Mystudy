// HThreadBase.h: interface for the HThreadclass.
//
//////////////////////////////////////////////////////////////////////

#ifndef __HTHREADBASE_H__
#define __HTHREADBASE_H__

#ifdef _WIN32
//#include <winsock2.h>
 #include <windows.h>
 #include "Base/Object.h"
#else
#include <semaphore.h>
#include <pthread.h>
#endif

class HThreadBase 
{
public:
	HThreadBase(void);
	virtual ~HThreadBase(void);
public:
	bool StartThread(void);
	void WaitForStop(void);

	/*
	�˺���ֻ�����ڲ�����
	*/
#ifdef WIN32
	static DWORD WINAPI InitThreadProc(PVOID pObj){
		return	((HThreadBase*)pObj)->ThreadProcMain();
	}
#else
	static void* InitThreadProc(void*pObj){
		((HThreadBase*)pObj)->ThreadProcMain();
		return 0;
	}
#endif
	/*
	�˺���ֻ�����ڲ�����
	*/
	unsigned long ThreadProcMain(void);

protected:
	/*
	���̺߳������������ڴ˺�����ʵ���߳�Ҫ������
	*/
	virtual void ThreadProc(void)=0;
protected:
#ifdef WIN32
	DWORD	m_dwThreadID;		// �̱߳�ʶ
	HANDLE	m_hThread;			// �߳̾��
	HANDLE	m_evStop;
#else
    pthread_t	m_thread;
    sem_t		m_semWaitForStop;
    bool		m_bThreadStopped;
#endif
	bool m_bLoop;
};

#endif
