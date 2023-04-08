#include<stdio.h>

int main()
{
    register int iCnt=0;//here iCnt means i=integer and Cnt= Counter,so it means integer counter.

    printf("Value of counter is:%d\n",iCnt);//just to see the starting value of Cnt

    for(iCnt=1;iCnt<=4000;iCnt++)//no semicolon here as it will mean that the loop will end here
    {
    printf("Jay Ganesh\n");
    }
    printf("Value of counter is:%d\n",iCnt);//just to see the end value of Cnt
    return 0;
}