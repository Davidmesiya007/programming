//c program to check Number is Even or Odd
#include<stdio.h>
int main()
{
    int number;
    printf("\nEnter the number :");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is even",number);
    }
    else
        printf("%d is Odd",number);
    return 0;
}
