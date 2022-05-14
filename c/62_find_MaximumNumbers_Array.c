//find maximum element in array
#include<stdio.h>
int main()
{
    int a[10];
    int i,n,max;
    printf("\nEnter the numbers:");
    scanf("%d",&n);
    max=a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    printf("the maximum number is %d",max);
 return 0;
}





