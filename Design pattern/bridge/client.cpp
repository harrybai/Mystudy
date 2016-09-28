#include "AbstractMp.h"
#include "AbstractSw.h"

int main()
{
    MobilephoneA *pMpa1 = new MobilephoneA(new SoftwareA);
    MobilephoneB *pMpb1 = new MobilephoneB(new SoftwareB);

    pMpa1->Opt();
    pMpb1->Opt();
    return 0;
}


