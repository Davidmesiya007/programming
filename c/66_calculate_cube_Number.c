//c program to calculate cube of a number
/*
cube of n is =n*n*n
n is 8=8*8*8=504
*/
#include<stdio.h>
int main()
{
    int cube,number;
    printf("\nEnter the number: ");
    scanf("%d",&number);
    cube=number*number*number;
    printf("cube of a %d is : %d",number,cube);
    return 0;
}
