//simple Interest
/*
formula of simple interest = (principle* time period * rate of interest)
                               ----------------------------------------
                                                100
*/
#include<stdio.h>
int main()
{
    float principle,rate,SI;
    float year;
    printf("\nEnter the principle amount : ");
    scanf("%f",&principle);
    printf("\nEnter the rate of interest : ");
    scanf("%f",&rate);
    printf("\nEnter the time period in year : ");
    scanf("%f",&year);
    SI=(principle*year*rate)/100;
    printf("\nprinciple amount =   %.2f  Rs",principle);
    printf("\nRate of Interest =   %.2f  percente",rate);
    printf("\n Time period     =   %.2f  year",year);
    printf("\nSimple Interest  =   %.2f  Rs",SI,principle);
    printf("\n                   ----------");
    printf("\nTotal amount     =   %.2f Rs",principle+SI);
    printf("\n                   ----------");
    return 0;
}
