#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,n,total;
    printf("enter the  5 digit number :");
    scanf("%d",&n);//12345
    a=n/10;//1234
    b=n%10;//5
    c=a/10;//1234/10=123
    d=a%10;//4
    e=c/10;//123/10=12
    f=c%10;
    g=e/10;//12/10=1
    h=e%10;//2
    total=(b*10000)+(d*1000)+(f*100)+(h*10)+(g*1);
    printf("reverse of the number is=%d",total);
    return 0;
}
