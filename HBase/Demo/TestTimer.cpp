#include "HTimer.h"
#include <unistd.h>
#include <sys/time.h>
#include "stdio.h"

class TestTimer
    : public HTimer
{
public:
    TestTimer()
    {
        SetTimer(10, 1000, NULL);
        SetTimer(11, 2000, NULL);
    }
    ~TestTimer(){}

    void OnTimer(unsigned int uIDEvent)
    {
        if(uIDEvent == 10)
        {
            time_t timel;
            time(&timel);
        
            //printf("id is 10 , com!   %s\n", asctime(gmtime(&timel)));
            printf("id is 10 , com!\n");
        }
        else if(uIDEvent == 11)
        {
            printf("id is 11 , com!\n");
        }
    }
};

int main()
{
    TestTimer a;
    //a.SetTimer(10, 1050, NULL);
    getchar();
    return 0;
}

