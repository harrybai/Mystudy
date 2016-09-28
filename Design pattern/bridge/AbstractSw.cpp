#include "AbstractSw.h"
#include "stdio.h"

AbstractSw::AbstractSw()
{
}

AbstractSw::~AbstractSw()
{
}


SoftwareA::SoftwareA()
{
}

SoftwareA::~SoftwareA()
{
}

void SoftwareA::Opt()
{
    printf("SoftwartB is Opt!\n");   
}


SoftwareB::SoftwareB()
{
}

SoftwareB::~SoftwareB()
{
}

void SoftwareB::Opt()
{
    printf("SoftwartB is Opt!\n");   
}


