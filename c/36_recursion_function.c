//recursion function using to solve factorial number
#include<stdio.h>
int factorial(); //function decleration
int main()
{
    int n,fact;
    printf("Enter the limit : ");
    scanf("%d",&n);
    fact=factorial(n); //function calling here, n is an actual parameter
    printf("\nFactorial of %d is %d",n,fact);
    return 0;
}
//function definition
int factorial(int i) // here i is a formal parameter
{
    int c;
    if(i<=1)
    {
        return 1;
    }
    c=i*factorial(i-1); //recursion function (function calling itself)
    return c;
}
