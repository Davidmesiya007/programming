//write a c program for npr calculation
/*
formula
nPr=n!/(n-1)!)
*/
#include<stdio.h>
int fact(int x);
int main()
{
    int n,r,factN,factN1,a;
    float perm;
    printf("nPr calculation");
    printf("\n-----------------");
    printf("\nEnter the n and r value:");
    scanf("%d%d",&n,&r);
    a=n-r;
    factN=fact(n);//factN=n!
    factN1=fact(a);
    perm=factN/factN1;
    printf("\nfactorial of %d is %d",n,factN);
    printf("\npermutation of %dP%d is =%.2f",n,r,perm);
    return 0;
}
int fact(int x)
{
    int i,fact=1;
    for(i=x;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
