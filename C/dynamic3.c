#include<stdio.h>
#include<stdlib.h>

int main()
{   
    
    int *ptr=NULL;

    //step1: allocate the memory
    ptr= (int *)malloc(sizeof(int),size*5);//20 bytes

    //step2: use the memory
    ptr=(int*)realloc(ptr, sizeof(int)*7); //28bytes
    //ptr=(int*)realloc(ptr, sizeof(int)*7); //12bytes

    
    //step3: deallocate the memory
    free(ptr);

    return 0;
}