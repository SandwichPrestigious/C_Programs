#include<stdio.h>

int main()
{
    int Std=0;

    printf("Enter you standard:\n");
    scanf("%d",&Std);

    switch(Std)
    {
        case 1:
            printf("Your exam is at 1PM\n");
            
        case 2:
            printf("Your exam is at 2PM\n");
            
        case 3:
            printf("Your exam is at 3PM\n");
            
        case 4:
            printf("Your exam is at 4PM\n");
            
        default:
            printf("Invalid\n");

    }
    return 0;
}