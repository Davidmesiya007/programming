#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,n,sum=0;
    printf("enter the number :");
    scanf("%d",&n);//12345
    a=n/10;//1234
    b=n%10;//5
    sum+=b;//sum=0+5=5
    c=a/10;//1234/10=123
    d=a%10;//4
    sum+=d;//5+4=9
    e=c/10;//123/10=12
    f=c%10;//123%10=3
    sum+=f;//9+3=12
    g=e/10;//12/10=1
    h=e%10;//2
    sum+=h;
    sum+=g;
    printf("the sum of givent digits is = %d",sum);
    return 0;
}