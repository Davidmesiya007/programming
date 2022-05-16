// c program to print even number 1 to N.
#include<stdio.h>
int main()
{
    int limit,i,even;
    printf("\nEnter the limit : ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }

    }
    return 0;
}
