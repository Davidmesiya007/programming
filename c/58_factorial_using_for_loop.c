//factorial using for loop
#include<stdio.h>
int main()
{
    int fact=1, num,i;
    printf("\nEnter the number:");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }

    printf("Factorial of %d is %d",num,fact);
    return 0;
}


