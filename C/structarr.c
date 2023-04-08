#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int Arr[4];
};

int main()
{
    struct Demo obj;

    obj.i=55;
    obj.f=55.556;

    obj.Arr[0]=11;
    obj.Arr[1]=11;
    obj.Arr[2]=11;
    obj.Arr[3]=11;

    return 0;
}