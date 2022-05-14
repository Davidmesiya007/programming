//fibonacci
#include<stdio.h>
int main()
{
    int fibo,num,temp,n1=0,n2=1,i;
    printf("\nEnter the limit:");
    scanf("%d",&num);
    printf("\nFibonacci Series of %d is : %d,%d",num,n1,n2);
    for(i=1;i<num-1;i++)
    {
        temp=n1+n2;
        printf(",%d",temp);
        n1=n2;
        n2=temp;
    }

    return 0;
}
