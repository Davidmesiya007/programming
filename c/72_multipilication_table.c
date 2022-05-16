//c program to print multiplication table
#include<stdio.h>
int main()
{
    int n1,n2,mul,i;
    printf("\nEnter the limit of multiplicant: ");
    scanf("%d",&n1);
    printf("\nEnter the multiplier number : ");
    scanf("%d",&n2);
    mul=n1*n2;
    for(i=1;i<=n1;i++)
    {
        mul=i*n2;
       // printf("----------|\n");
        printf("\n(%d) * (%d) =  %d",i,n2,mul);
       // printf("\n----------");
    }



    return 0;
}
