#include<stdio.h>

//typedef old_name new_name ;

typedef const int CINT;

typedef unsigned int UINT;

int main()
{
    const int no=11;
    CINT i= 11;

    unsigned int x= 21;
    UINT y= 21;
    return 0;
}