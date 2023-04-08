#include<stdio.h>

int main()
{
    register int iCnt=0;//here iCnt means i=integer and Cnt= Counter,so it means integer counter.

    iCnt=1;//1

    while(iCnt<=4)//2
    {
        printf("Jay Ganesh...\n");//4
        iCnt++;//3
    }

    printf("Value of the counter is:%d\n",iCnt);

    return 0;


}

