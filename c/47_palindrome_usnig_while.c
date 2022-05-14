//palindrome using while loop

/*
palindrome is number which is true for given "number" is equal to reversed of the
"number". Otherwise,it is not a palindrome.

sample input
4567
6776

procedure
loop 1.
    checks 4567>0 condition is true. so, compiler executes while loop
    temp=4567%10 //value of 7 is stored into temp variable
    rev=(rev*10)+temp //0+7=7 is stored in reversed variable
    n=4567/10 //456 is stored in to n
Loop 2
    checks 456>0 condition is true, so, compiler enter the loop
    temp=456%10 //6 is stored into temp variable
    rev=(7*10)+temp //70+6=76 is stored into reversed variable
    n=456/10 //45 is stored in to n
Loop 3
    checks 45>0 condition is true, so, compiler enter the loop
    temp=45%10 //5 is stored into temp variable
    rev=(76*10)+temp //760+5=765 is stored into reversed variable
    n=45/10 //4 is stored in to n
Loop 4
    checks 4>0 condition is true, so, compiler enter the loop
    temp=4%10 //4 is stored into temp variable
    rev=(765*10)+temp //7650+4=7654 is stored into reversed variable
    n=4/10 //0 is stored in to n
Loop 5
    checks 0>0 condition is false compiler exit the while loop. here, 0 is equal to 0

checks rev==n condition is true, then print it is a palindrome. Otherwise it is not a palindrome

output
4567 is not palindrome
6776 is a palindrome
*/
#include<stdio.h>
int main()
{
    int temp,n,rev=0,original;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {

        temp=n%10;
        rev=(rev*10)+temp;
        n=n/10;
    }
    if(original==rev)
        printf("\n%d is palindrome",original);
    else
        printf("\n%d is not a palindrome",original);
}
