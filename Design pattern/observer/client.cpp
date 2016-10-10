#include "PeopleNewspaper.h"
#include "SubHuman.h"
#include "stdio.h"

int main()
{
    INewpaper *pNewspaper = new PeopleNewspaper();
    ISubscribe *sub = new SubHuman("mengyi");
    pNewspaper->RegisterSubscribe(sub);
    sub = new SubHuman("harry");
    pNewspaper->RegisterSubscribe(sub);
    sub = new SubHuman("sb2b");
    pNewspaper->RegisterSubscribe(sub);

    pNewspaper->NotifyNewpaper();

    printf("======delet sb2b=======\n");

    pNewspaper->RemoveSubscribe(sub);
    pNewspaper->NotifyNewpaper();
    return 0;
}


