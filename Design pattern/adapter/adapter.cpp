#include "adapter.h"
#include "stdio.h"

Target::Target()
{
}

Target::~Target()
{
}

void Target::Request()
{
    printf("<harry> --- Target::Request\n");
}


Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{
}

void Adaptee::SpecificRequest()
{
    printf("<harry> --- Adaptee::SpecificRequest\n");
}


Adapter_1::Adapter_1()
{
}

Adapter_1::~Adapter_1()
{
}

void Adapter_1::Request()
{
    printf("<harry> --- Adapter_1::Request\n");
    SpecificRequest();
}



Adapter_2::Adapter_2(Adaptee *pAdaptee)
{
    m_pAdaptee = pAdaptee;
}

Adapter_2::Adapter_2() : m_pAdaptee(new Adaptee)
{
}

Adapter_2::~Adapter_2()
{
}

void Adapter_2::Request()
{
    printf("<harry> --- Adapter_2::Request\n");
    m_pAdaptee->SpecificRequest();
}













