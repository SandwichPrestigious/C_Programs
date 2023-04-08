#include<stdio.h>
#include"header.h"

int main()
{
    struct Demo obj;
    
    printf("Inside Main\n");

    printf("Rate of Interest is %f\n",ROI);//10.7
    printf("Fees is %d\n",FEES);//18200
    printf("Size of demo structure:%ld\n",sizeof(obj));//8   

    return 0;
}