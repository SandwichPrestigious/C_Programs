#include<stdio.h>

int main()
{
    double num1=0, num2=0;
    char operator;

    printf("Enter the first number:\n");
    scanf("%lf",&num1);
    printf("Enter the second number:\n");
    scanf("%lf",&num2);

    printf("Enter the operator:\n");
    scanf("%c",&operator);

    switch(operator){
        case '+':
            printf("%lf + %lf=%lf\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("%lf - %lf=%lf\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("%lf * %lf=%lf\n",num1,num2, num1*num2);
            break;
        case '/':
            printf("%lf / %lf=%lf\n",num1,num2, num1/num2);
            break;
        default:
            printf("Error Invalid operator\n");
            break;

            
    }
    return 0;
}