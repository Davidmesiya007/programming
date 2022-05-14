//continue statement
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==4)
            continue;
        printf("\n%d",i);

    }
}
