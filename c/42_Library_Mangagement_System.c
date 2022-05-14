/*
A library charges a fine for every book returned late.
For first 5 days the fine is 50 paise.
for 6-10 days fine is one rupee and above 10 days fine is 5 rupee.
if your return the book after 30 days your membership will be cancelled.
write a program to accept the number of days the number is late to return the book
and display the fine or the appropriate message
 */
#include<stdio.h>
int main()
{


int n;
printf("\nEnter the number of days late:");
scanf("%d",&n);
if(n<=30)
{
    printf("\nYour Membership is active");
    if(n>=1 && n<=5)
    {
        printf("\nYour fine is 50 paise");
    }
    else if(n>=6 && n<=10)
    {
        printf("\nYour fine is 1 rupee");
    }
    else
    {
        printf("\nYour fine is 5 rupees");
    }
}
else
{
    printf("\nyour membership is cancelled");
    printf("\nPlease contact the administration");
}
}







