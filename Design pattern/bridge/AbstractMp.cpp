#include "AbstractMp.h"
#include "AbstractSw.h"
#include "stdio.h"

AbstractMp::AbstractMp()
{
}

AbstractMp::~AbstractMp()
{
}

MobilephoneA::MobilephoneA(AbstractSw *software)
{
    m_software = software;
}

MobilephoneA::~MobilephoneA()
{
}

void MobilephoneA::Opt()
{
    printf("Opt MobliephoneA!\n");
    m_software->Opt();
}

MobilephoneB::MobilephoneB(AbstractSw *software)
{
    m_software = software;
}

MobilephoneB::~MobilephoneB()
{
}

void MobilephoneB::Opt()
{
    printf("Opt MobliephoneB!\n");
    m_software->Opt();
}



