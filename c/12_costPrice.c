/*if the total selling price of 15 items and the total profit earned on them is input
through the keyboard, write program to find the cost price of one item.

program Logic
selling price of 15 items=200
profit of 15 items=50
cost price of 15 items = selling price - profit==>200-50
cost price of single item =  cost price of 15 items / 15
*/
#include<stdio.h>
int main()
{
    float sPrice,profit,totCostPrice,sinCostPrice;
    printf("Enter the selling price and profit of the 15 items:");
    scanf("%f%f",&sPrice,&profit);
    totCostPrice = sPrice - profit;
    sinCostPrice = totCostPrice / 15;
    printf("\nSelling price               :%0.2f",sPrice);
    printf("\nProfit of 15 items          :%0.2f",profit);
    printf("\nTotal cost price of 15 items:%0.2f",totCostPrice);
    printf("\ncost price of single items  :%0.2f",sinCostPrice);
    return 0;
}





