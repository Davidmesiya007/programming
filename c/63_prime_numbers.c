// write a program for given number is prime or not
/*
what is prime number
prime number is nothing but it is dived by one and itself.
prime number is only two factors one is 1 and another one is n

example

input:5
output
it is a prime number - 5 is only two factors are 1 and 5

program logic
-------------
check  5 / 2 = 2 remainder=1
       5 / 3 = 3 remainder=2
       5 / 4 = 1 remainder=3
    The number n is divided by m it  produce remainder is 0 then m is a factor of n

*/
#include<stdio.h>
int main()
{
    int rem,i,num,isPrime=1;
    printf("\nEnter the number:");
    scanf("%d",&num);
    for(i=2;i<sqrt(num);i++) // i=2 because 1 is neither prime nor composite number
    {
        if(num%i==0)
        {
            isPrime=0;
            break;
        }
    }
    if(num==1)
    {
        printf("%d is neither  prime and composite number",num);
    }
    else
    {
        if(isPrime==1)
            printf("%d is a prime number",num);
        else
            printf("%d is a not prime",num);
    }
    return 0;
}
