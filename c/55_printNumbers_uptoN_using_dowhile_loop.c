//print numbers upto n using do while loop
#include<stdio.h>
int main()
{
    int num,i=1;
    printf("\nEnter the Limit : ");
    scanf("%d",&num);
    do
    {
        printf("%d",i);
        i++;
    }while(i<=num);

    return 0;
}
