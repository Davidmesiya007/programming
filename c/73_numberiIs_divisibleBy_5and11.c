//c program to find number is divisible by 5 and 11
#include<stdio.h>
int main()
{
    int number;
    printf("\nEnter the number: ");
    scanf("%d",&number);
    if(number%5==0 && number%11==0)
    {
        printf("\n%d is divisible by both 5 and 11",number);
    }
    else if(number%5==0)
    {
        printf("\n%d is divisible by only 5 not 11" ,number);
    }
    else if(number%11==0)
    {
        printf("\n%d is divisible by only 11 not 5",number);
    }
    else
        printf("%d is not divisible by both 5 and 11",number);


    return 0;
}
