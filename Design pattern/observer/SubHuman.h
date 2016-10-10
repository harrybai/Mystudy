#pragma once

#include "IObserver.h"
#include <string>

class SubHuman : public ISubscribe
{
public:
    SubHuman(std::string name);
    ~SubHuman();

public:
    virtual void HasNewpaper();

private:
    std::string m_name;
};

