//write a program to find the largest of three numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("\nEnter the first number : ");
    scanf("%d",&num1);
    printf("\nEnter the second number : ");
    scanf("%d",&num2);
    printf("\nEnter the third number : ");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3)
    {
        printf("\nLargest number is : %d",num1);
    }
    else if(num2>num3 && num2>num1)
    {
        printf("\nLargest number is : %d",num2);
    }
    else
        printf("\nLargest number is : %d",num3);


    return 0;
}
