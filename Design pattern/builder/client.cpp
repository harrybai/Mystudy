#include "Builder.h"

int main()
{
    Director *pDirect1 = new Director(new ConcreBuilder1);
    Director *pDirect2 = new Director(new ConcreBuilder2);

    pDirect1->Construct();
    pDirect2->Construct();
    return 0;
}

