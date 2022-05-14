#include <stdio.h>
int main()
{
    int a,c,d;
    printf("enter the value of c and d are:");
    scanf("\n%d%d",&c,&d);
    printf("Before swapping c=%d  and d=%d ",c,d);
    a=c;
    c=d;
    d=a;
     printf("\nAfter swapping c=%d  and d=%d ",c,d);
}
