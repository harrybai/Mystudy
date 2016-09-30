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
	此函数只供类内部调用
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
	此函数只供类内部调用
	*/
	unsigned long ThreadProcMain(void);

protected:
	/*
	主线程函数，您可以在此函数中实现线程要做的事
	*/
	virtual void ThreadProc(void)=0;
protected:
#ifdef WIN32
	DWORD	m_dwThreadID;		// 线程标识
	HANDLE	m_hThread;			// 线程句柄
	HANDLE	m_evStop;
#else
    pthread_t	m_thread;
    sem_t		m_semWaitForStop;
    bool		m_bThreadStopped;
#endif
	bool m_bLoop;
};

#endif
