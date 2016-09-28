//Abstract software class : AbstractSw
#ifndef __ABSTRACT_SW_H__
#define __ABSTRACT_SW_H__

class AbstractSw
{
public:
    AbstractSw();
    virtual ~AbstractSw();

public:
    virtual void Opt() = 0;
};

class SoftwareA : public AbstractSw
{
public:
    SoftwareA();
    virtual ~SoftwareA();

public:
    virtual void Opt();
};

class SoftwareB : public AbstractSw
{
public:
    SoftwareB();
    virtual ~SoftwareB();

public:
    virtual void Opt();
};

#endif //__ABSTRACT_SW_H__



