//C program to find absolute value of number
#include<stdio.h>
int main()
{
    int num,absNum;
    printf("\nEnter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        absNum=-num;
        printf("\nThe absolute value of %d is : %d",num,absNum);
    }
    else
    {
        printf("\nThe absolute value of %d is : %d",num);
    }

    return 0;
}
