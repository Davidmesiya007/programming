//conditional operator statement
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("please enter the A and B values:");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    printf("The greater number is %d",c);
    return 0;
}
