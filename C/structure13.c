#include<stdio.h>
#pragma pack(1)//used to save space in a program

struct Demo{
    int no;
    char ch;//here the concept of padding it used
    float f;
    int i;
};

int main()
{
    struct Demo obj;

    printf("%ld\n",sizeof(obj));

    return 0;
}