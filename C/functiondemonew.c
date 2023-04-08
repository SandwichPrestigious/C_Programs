#include<stdio.h>

int Addition(int A, int B)
{
    int Result = 0;

    Result= A+B;

    return Result;
}
int Product(int C , int D)
{
    int Ansr= 0;
    Ansr= C*D;
    return Ansr;
}
int Division(int E, int F)
{
    float Answ=0;
    Answ= F/E;
    return Answ;
}

int main()
{
    float No1 = 10;
    float No2 = 11;
    auto int Ans = 0;
    int ans= 0;
    float ANS= 0;

    Ans = Addition(No1,No2);
    ans = Product(No1,No2);
    ANS= Division(No1,No2);

    printf("%d",Ans);
    printf("\n%d\n",ans);
    printf("%f\n",ANS);

    return 0;
}
