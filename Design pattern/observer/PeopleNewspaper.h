#pragma once

#include "IObserver.h"
#include <list>

class PeopleNewspaper : public INewpaper
{
public:
    PeopleNewspaper();
    ~PeopleNewspaper();

public:
    virtual void RegisterSubscribe(ISubscribe *pSubscribe);
    virtual void RemoveSubscribe(ISubscribe *pSubscribe);
    virtual void NotifyNewpaper();

public:
    std::list<ISubscribe *> m_listSubscribe;
};


