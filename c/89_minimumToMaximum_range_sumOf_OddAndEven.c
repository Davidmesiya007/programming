//sum of even and odd number range between minimum and maximum
#include<stdio.h>
int odd(int x,int y);
int even(int x,int y);
int main()
{
    int minimum,maximum,sum;
    printf("\nEnter the minimum range : ");
    scanf("%d",&minimum);
    printf("\nEnter the maximum range : ");
    scanf("%d",&maximum);
    sum=odd(minimum,maximum)+even(minimum,maximum);//sum of even and odd numbers
    printf("\nsum of odd and even number  range between %d and %d is : %d",minimum,maximum,sum);
}

int even(int x,int y)
{
    int i;
    int sum=0;
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("\nsum of even number range between %d and %d is = %d",x,y,sum);
    return sum; //sum of even numbers
}
int odd(int x,int y)
{
    int i;
    int sum=0;
    for(i=x;i<=y;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("\nsum of odd number range between %d and %d is = %d",x,y,sum);
    return sum; //sum of odd numbers
}

