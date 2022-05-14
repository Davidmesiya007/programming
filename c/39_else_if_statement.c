#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("%d is a negative value",n);
    }
    else if(n==0)
    {
        printf("It is zero");
    }
    else if(n>0)
    {
        printf("%d is a positive value",n);
    }
    return 0;
}

