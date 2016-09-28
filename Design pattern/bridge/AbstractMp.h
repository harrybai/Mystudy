//Abstract mobile phone class , AbstractMp

#ifndef __ABSTRACT_MP_H__
#define __ABSTRACT_MP_H__

class AbstractSw;
class AbstractMp
{
public:
    AbstractMp();
    virtual ~AbstractMp();

public:
    virtual void Opt() = 0;
};

class MobilephoneA : public AbstractMp
{
public:
    MobilephoneA(AbstractSw *software);
    virtual ~MobilephoneA();

public:
    void Opt();

public:
    AbstractSw *m_software;
};

class MobilephoneB : public AbstractMp
{
public:
    MobilephoneB(AbstractSw *sofitware);
    virtual ~MobilephoneB();

public:
    void Opt();

public:
    AbstractSw *m_software;
};

#endif //__ABSTRACT_MP_H__

