//sum of even and odd numbers in given range
#include<stdio.h>
int odd(int x);
int even(int x);
int main()
{
    int range,sum;
    printf("\nEnter the range : ");
    scanf("%d",&range);
    sum=odd(range)+even(range);//sum of even and odd numbers
    printf("\nsum of odd and even number upto range %d  is : %d",range,sum);
}

int even(int x)
{
    int i;
    int sum=0;
    for(i=1;i<=x;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("\nsum of even number upto %d is = %d",x,sum);
    return sum; //sum of even numbers
}
int odd(int x)
{
    int i;
    int sum=0;
    for(i=1;i<=x;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("\nsum of odd number upto %d is = %d",x,sum);
    return sum; //sum of odd numbers
}
