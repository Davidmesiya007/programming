//c program to find compound interest
/*
compound Interest
-----------------
formula
A=P+[1+r\n]
*/
#include<stdio.h>
#include<math.h>

int main()
{
   int prince,rate,year,ci,amount;
   printf("\nEnter the principle amount : ");
   scanf("%d",&prince);
   printf("\nEnter the rate of interest : ");
   scanf("%d",&rate);
   printf("\nEnter the number of years : ");
   scanf("%d",&year);
   amount=prince*(pow((1+rate/100),year));
   ci=amount-prince;
   printf("\nCompound Interest is = %d ",ci);

}
