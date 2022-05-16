//find profit or loss
/*
costPrice=5000
sellingPrice=7000
costPrice>sellingPrice then loss
costPrice<sellingPrice then profit
*/
#include<stdio.h>
int main()
{
    int costPrice,sellPrice,temp; //temp is used for identify profit or loss
    printf("\nEnter the cost price :");
    scanf("%d",&costPrice);
    printf("\nEnter the selling Price: ");
    scanf("%d",&sellPrice);
    temp=sellPrice-costPrice;
    (temp>0)?printf("\nprofit = %d",temp):printf("\nloss = %d",-temp);
}
