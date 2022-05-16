//number is divisible by 6 and 13
#include<stdio.h>
int main()
{
    int number;
    printf("\nEnter the number : ");
    scanf("%d",&number);
    (number%5==0 && number%11==0)?printf("%d is divisible by both 5 and 11",number):printf("%d is not divisible by both 5 and 11",number);

    return 0;
}
