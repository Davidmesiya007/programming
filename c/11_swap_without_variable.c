#include <stdio.h>
int main()
{
    int c,d;
    printf("enter the values of c and d are:");
    scanf("%d%d",&c,&d);
    printf("Before swapping c=%d  and d=%d ",c,d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("After swapping c=%d  and d=%d ",c,d);
    return 0;
}

