//find the minimum value of array
#include<stdio.h>
int main()
{
    int a[10];
    int i,num,min;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    printf("Enter the elements :");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<num-1;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The minimum value of array is : %d",min);
}
