#include "SubHuman.h"
#include "stdio.h"

SubHuman::SubHuman(std::string name)
    : m_name(name)
{
}

SubHuman::~SubHuman()
{
}

void SubHuman::HasNewpaper()
{
    printf("<harry> --- SubHuman::HasNewpaper ---name[%s]\n", m_name.c_str());
}

