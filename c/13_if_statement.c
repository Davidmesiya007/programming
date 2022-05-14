//if statement example program for you're a eligible for vote.
#include<stdio.h>
int main()
{
    int n,name[10];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your age :");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("%s age is %d eligible for vote",name,n);
    }
    return 0;
}
