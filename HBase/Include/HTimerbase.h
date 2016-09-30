#ifndef __HTIMERBASE_H__
#define __HTIMERBASE_H__

#include "HThreadBase.h"

class CallbackHTimerbase
{
public:
    CallbackHTimerbase(){}
    ~CallbackHTimerbase(){}

    virtual void OnTimerEvent(unsigned int uIDEvent) = 0;
};

class HTimerbase
    : public HThreadBase
{
public:
    HTimerbase(CallbackHTimerbase *pEvent);
    ~HTimerbase();

protected:
    void ThreadProc();

public:
    void SetTimer(unsigned int uIDEvent, unsigned int uElapse);

private:
    unsigned int m_uIDEvent;
    struct timeval m_tmval;
    CallbackHTimerbase *m_pEvent;
};

#endif //__HTIMERBASE_H__

