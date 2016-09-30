#include "HTimer.h"

HTimer::HTimer()
{
}

HTimer::~HTimer()
{
}

bool HTimer::SetTimer(unsigned int uIDEvent, unsigned int uElaspe, void *fpn)
{
    MAPUNTIMERBASE_IT it = m_mapUnTimerbase.find(uIDEvent);
    if(it != m_mapUnTimerbase.end())
    {
        printf("TimerID[%d] is used!\n", uIDEvent);
        return false;
    }
    
    HTimerbase *pTimerbase = new HTimerbase(this);
    pTimerbase->SetTimer(uIDEvent, uElaspe);
    pTimerbase->StartThread();
    m_mapUnTimerbase[uIDEvent] = pTimerbase;
    return true;
}

bool HTimer::KillTimer(unsigned int uIDEvent)
{
    MAPUNTIMERBASE_IT it = m_mapUnTimerbase.find(uIDEvent);
    if(it == m_mapUnTimerbase.end())
    {
        printf("TimerID[%d] is not using!\n", uIDEvent);
        return false;
    }
    
    HTimerbase *pHTimerbase = it->second;
    pHTimerbase->WaitForStop();
    delete pHTimerbase;
    m_mapUnTimerbase.erase(it);
    return true;
}

void HTimer::OnTimerEvent(unsigned int uIDEvent)
{
    OnTimer(uIDEvent);
}

