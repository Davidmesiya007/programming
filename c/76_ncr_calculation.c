//c program for ncr calculation
/*
ncr=n1/(n-1)!*r!
*/
#include<stdio.h>
int fact(int x);
int main()
{
    int n,r,factN,factR,factN1;
    float combination;
    printf("Enter the n and r number : ");
    scanf("%d%d",&n,&r);
    int a=n-r;
    factN=fact(n);
    factR=fact(r);
    factN1=fact(a);
    combination=factN/(factR*factN1);
    printf("\nfactN = %d",factN);
    printf("\ncombination of %dc%d is = %.2f",n,r,combination);



    return 0;

}
int fact(int x)
{
    int i;
    int fact=1;
    for(i=x;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
