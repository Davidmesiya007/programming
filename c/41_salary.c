#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("Enter the basic salary of employee:");
    scanf("%f",&bs);
    da=bs*0.4;
    hra=bs*0.2;
    gs=da+hra+bs;
    printf("\nEmployee Basic Salary is:%0.2f",bs);
    printf("\nEmployee Dearness Allowance is:%0.2f",da);
    printf("\nEmployee House Rent Allowance is:%0.2f",hra);
    printf("\nEmployee Gross Salary is:%0.2f",gs);
    return 0;
}

