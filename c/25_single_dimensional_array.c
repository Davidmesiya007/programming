#include<stdio.h>
int main()
{
    int i,n,a[100];
    printf("enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the  values : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}
