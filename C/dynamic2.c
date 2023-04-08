#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int arr[10]; //static memory allocation    //is only for reference here
    int size=0;
    int *ptr=NULL;

    printf("Enter the size of array:");
    scanf("%d",&size);

    //step1: allocate the memory
    ptr= (int *)calloc(sizeof(int),size);//data is stored in heap here

    //step2: use the memory

    //step3: deallocate the memory
    free(ptr);

    return 0;
}