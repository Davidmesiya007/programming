//Nested if statement program  given year is
 leap year or not
/*
Program Logic
leap year condition:-
 given year is century year then divided by 400 it is leap year
 given year is not century year then divided by 4 it is leap year
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("%d is leap year",year);
        }
        else
            printf("%d is not a leap year",year);
    }
    else
    {
        if(year%4==0)
        {
            printf("%d is leap year",year);
        }
        else
        {
            printf("%d is not a leap year",year);
        }

    }
    return 0;
}
