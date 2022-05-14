#include<stdio.h>
int main()
{
    float far,cel;
    printf("Enter the city temperature in Faranheit:");
    scanf("%f",&far);
    cel=(far-32)/1.8000;
    printf("City temperature in centigrade is=%.2f",cel);
    return 0;
}