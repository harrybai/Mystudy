#ifndef __HTIMER_H__
#define __HTIMER_H__

#include "HTimerbase.h"
#include <map>

typedef std::map<unsigned int, HTimerbase *> MAPUNTIMERBASE;
typedef MAPUNTIMERBASE::iterator MAPUNTIMERBASE_IT;
class HTimer : 
    public CallbackHTimerbase
{
public:
    HTimer();
    ~HTimer();

public:
    //static void InitTimerProc();
    bool SetTimer(unsigned int uIDEvent, unsigned int uElapse, void *pfn);
    bool KillTimer(unsigned int uIDEvent);

public:
    virtual void OnTimer(unsigned int uIDEvent) = 0;

public:
    virtual void OnTimerEvent(unsigned int uIDEvent);

private:
    MAPUNTIMERBASE m_mapUnTimerbase;
};
#endif //__HTIMER_H__

