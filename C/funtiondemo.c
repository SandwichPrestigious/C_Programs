#include<stdio.h>
int DATA=60;//global variable

int main()
{
    //local variable
    int A = 8;  
    int B=9;
    int sum=0;//to prevent garbage value collection
    int product=0;
    int div=0;

    sum=  A + B;
    product=A*B;
    div=B/A;

    printf("\n%d\n",sum);//'%' here is called as format string 
    //'d' here means decimal indicating the number system
    printf("\n%d\n",product);
    printf("\n%d\n",div);

    return 0;        
}