#include<stdio.h>
int main()
{
    float km,m,cm,inch,feet;
    printf("\nEnter the Distance between two cities:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    feet=inch/12;
    printf("\nInput Data: %0.2f: ",km);
    printf("\nDistance in centiMeters: %0.2f ",cm);
    printf("\nDistance in inches: %0.2f ",inch);
    printf("\nDistance in feets: %0.2f ",feet);
    printf("\nDistance in meters: %0.2f ",m);
    return 0;
}
