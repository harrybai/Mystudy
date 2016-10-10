#pragma once

class ISubscribe
{
public:
    ISubscribe(){}
    virtual ~ISubscribe(){}

public:
    virtual void HasNewpaper() = 0;
};


class INewpaper
{
public:
    INewpaper(){}
    virtual ~INewpaper(){}

public:
    virtual void RegisterSubscribe(ISubscribe *pSubscribe) = 0;
    virtual void RemoveSubscribe(ISubscribe *pSubscribe) = 0;
    virtual void NotifyNewpaper() = 0;
};



