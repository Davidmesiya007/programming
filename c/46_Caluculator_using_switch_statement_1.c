//calculator program using switch statement alternate
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("please enter the first number, operator and second number with space inbetween:");
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
    {
    case '+':
        printf("\naddition of %d and %d is %d",a,b,a+b);
        break;
    case '-':
        printf("\nsubtraction of %d and %d is %d",a,b,a-b);
        break;
    case '*':
        printf("\nMultiplication of %d and %d is %d",a,b,a*b);
        break;
    case '/':
        printf("\nDivision of %d and %d is %d",a,b,a/b);
        break;
    default:
        printf("\nyour operator is not valid or It is not possible in this calculator");
    }

    return 0;
}
