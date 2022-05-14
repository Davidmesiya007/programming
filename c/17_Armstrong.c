/* Three digit number input through the keyboard write a program to find the given
number is armstrong number or not.
-----------------------------------
program logical
-----------------------------------
given number(n)=153
153%10=3 //a
153/10=15 //temp


153=(1*1*1)+(5*5*5)+(3*3*3)=153
then given number is armstrong number

*/
#include<stdio.h>
int main()
{
    int n,a,b,x,y,sum;
    printf("\nEnter the three digit number:");
    scanf("%d",&n);
    if(n>=100 && n<1000)
    {
        a=n%10; //3
        x=n/10; //15
        b=x%10; //5
        y=x/10; //1
        printf("\n%d %d %d",y,b,a);
        sum=(a*a*a)+(b*b*b)+(y*y*y);
        if(sum==n)
        {
            printf("\n%d is an Armstrong number",n);
        }
        else
        {
            printf("\n%d is a not an Armstrong number",n);
        }

    }
    else{
        printf("please enter the three digit number");
    }
    return 0;
}
