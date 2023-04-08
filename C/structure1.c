#include<stdio.h>

struct Demo//declaration of structure, is a global declaration but not definition
{
    int i;
    float f;
    double d;
    int j;
};
//here the variable do not have any value as they don't have any memory
int main()
{
    struct Demo obj1;//auto storage class
    struct Demo obj2;//auto storage class

    obj1.i=11;
    obj1.f=90.9;
    obj1.j=21;

    obj2.i=51;
    obj2.f=78.8;
    obj2.j=21;

    printf("%d\n",obj1.i);//11
    printf("%d\n",obj2.i);//51


    return 0;
}