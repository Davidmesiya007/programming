//write a program for voter eligible or not
#include<stdio.h>
int main()
{
    int age, name[10];
    printf("Enter the Name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("%s age is %d eligible for vote",name,age);
    }
    else
    {
        printf("%s age is %d not eligible for vote",name,age);
    }
    return 0;
}
