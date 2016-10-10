#ifndef __ADAPTER_H__
#define __ADAPTER_H__

class Target
{
public:
    Target();
    virtual ~Target();

public:
    virtual void Request();
};

class Adaptee
{
public:
    Adaptee();
    ~Adaptee();

public:
    void SpecificRequest();
};

class Adapter_1 : public Target, private Adaptee
{
public:
    Adapter_1();
    ~Adapter_1();

public:
    virtual void Request();
};

class Adapter_2 : public Target
{
public:
    Adapter_2(Adaptee *pAdaptee);
    Adapter_2();
    ~Adapter_2();

public:
    virtual void Request();

private:
    Adaptee *m_pAdaptee;
};

#endif //__ADAPTER_H__
