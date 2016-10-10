#include "PeopleNewspaper.h"
#include <algorithm>  //find() 调用使用的头文件

PeopleNewspaper::PeopleNewspaper()
{
}

PeopleNewspaper::~PeopleNewspaper()
{
    std::list<ISubscribe *>::iterator it = m_listSubscribe.begin();
    for(;it != m_listSubscribe.end();)
    {
        delete (*it);
        it = m_listSubscribe.erase(it);
    }
}

void PeopleNewspaper::RegisterSubscribe(ISubscribe *pSubscribe)
{
    if(m_listSubscribe.empty())
    {
        m_listSubscribe.push_back(pSubscribe);
    }

    if(find(m_listSubscribe.begin(), m_listSubscribe.end(), pSubscribe) 
            == m_listSubscribe.end())
    {
        m_listSubscribe.push_back(pSubscribe);
    }
}

void PeopleNewspaper::RemoveSubscribe(ISubscribe *pSubscribe)
{
    std::list<ISubscribe *>::iterator it = 
        find(m_listSubscribe.begin(), m_listSubscribe.end(), pSubscribe);
    if(it != m_listSubscribe.end())
    {
        m_listSubscribe.erase(it);
    }
}

void PeopleNewspaper::NotifyNewpaper()
{
    std::list<ISubscribe *>::iterator it = m_listSubscribe.begin();
    for(;it != m_listSubscribe.end();++it)
    {
        (*it)->HasNewpaper();
    }
}



