//factorial using while loop
#include<stdio.h>
int main()
{
    int fact=1, num,original;
    printf("\nEnter the number : ");
    scanf("%d",&num);//number value save for printing the output
    original=num;
    while(num>0)
    {
        fact=fact*num;
        num--;
    }
    printf("The factorial of %d is %d :",original,fact);
    return 0;
}
