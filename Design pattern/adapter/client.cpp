#include "adapter.h"
#include "stdio.h"

int main()
{
    Target *pTarget = new Adapter_1();
    pTarget->Request();

    Adaptee *pAdaptee = new Adaptee();
    Adapter_2 adapter2(pAdaptee);
    adapter2.Request();
    
    return 0;
}



