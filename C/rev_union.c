#include<stdio.h>

struct Demo
{
    int i;
    double d;
};

union Hello
{
    int i;
    double d;
};

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of Structure is : %d\n",sizeof(dobj));
    printf("Size of Union is : %d\n",sizeof(hobj));

    return 0;

}