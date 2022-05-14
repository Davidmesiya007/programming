//print numbers uptoo N using while loop
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the limit : ");
    scanf("%d",&num);
    int i=1;
    while(i<=num)
    {
        printf("%d",i);
        i++;
    }
    return 0;
}
