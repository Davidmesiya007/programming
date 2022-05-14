
#include<stdio.h>
add()
{
    int a,b,c;

    printf("\nEnter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    c=a+b;
    printf("\nThe sum of A and B is=%d",c);
}
int main()
{
    int n,i;
    printf("\nhow many time you perform addition operation:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        add();
    }
    return 0;
}
