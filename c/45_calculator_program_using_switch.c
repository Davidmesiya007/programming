//calculator program using switch satatement
#include<stdio.h>
int main()
{
int calc,a,b;
printf("--------Calculator----------");

printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
printf("\nEnter your first number:");
scanf("%d",&a);
printf("\nEnter your Second number:");
scanf("%d",&b);
printf("Choose your operation:");
scanf("%d",&calc);
switch(calc)
{
case 1:
    printf("\nAddition of %d and %d is %d",a,b,a+b);
    break;
case 2:
    printf("\nSubtraction of %d and %d is %d",a,b,a-b);
    break;
case 3:
    printf("\nMultiplication of %d and %d is %d",a,b,a*b);
    break;
case 4:
    printf("\nDivision of %d and %d is %d",a,b,a/b);
    break;
default:
printf("wrong choice");
}
return 0;
}
