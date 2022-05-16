//eligible for vote or not using conditional operator
#include<stdio.h>
int main()
{
    int age;
    printf("\nEnter your age :");
    scanf("%d",&age);
    (age>=18)?printf("you eligible for vote"):printf("You not eligible for vote");
    return 0;

}
