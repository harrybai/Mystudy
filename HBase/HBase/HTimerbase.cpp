#include "HTimerbase.h"

HTimerbase::HTimerbase(CallbackHTimerbase *pEvent)
    : m_pEvent(pEvent)
{
    m_uIDEvent = 0;
    m_tmval.tv_sec = 1;
    m_tmval.tv_usec = 0;
}

HTimerbase::~HTimerbase()
{
}

void HTimerbase::ThreadProc()
{
    while(m_bLoop)
    {
        m_pEvent->OnTimerEvent(m_uIDEvent);
        struct timeval tmval = m_tmval;
        select(1, NULL, NULL, NULL, &tmval);
    }
}

void HTimerbase::SetTimer(unsigned int uIDEvent, unsigned int uElapse)
{
    if(uElapse < 1)
    {
        uElapse = 1;
    }
    m_uIDEvent = uIDEvent;
    m_tmval.tv_sec = uElapse/1000;
    m_tmval.tv_usec = (uElapse%1000)*1000;
}


