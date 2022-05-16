//c program for print odd number up to N
#include<stdio.h>
int main()
{
    int number,i;
    printf("\nEnter the number : ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(i%2!=0)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}
