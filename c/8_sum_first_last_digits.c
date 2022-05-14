/* If your four digit number is input through the keyboard, write a programme obtain of the
sum of the first and last digits  of this number */

#include<stdio.h>
int main()
{
    int a,b,c,d,sum,n;
    printf("enter the 4 digit number:");
    scanf("%d",&n);
    a=n/10; // 1234/10=123
    b=n%10; // 1234%10=4
    c=a/10;// 123/10=12
    d=c/10; // 12/10=1
    sum=b+d;
    printf("The sum of the First and Last digit is=%d",sum);
    return 0;


}
