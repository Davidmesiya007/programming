//standard deviation
#include<stdio.h>
#include<math.h>
int main()
{
    int a[100];
    int number,i,min,max;
    float mean,sum=0,sum1=0,deviation,varience;
    printf("\nHow many numbers you entered :");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        printf("\nEnter the %d th number : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<number;i++)
    {
        sum=sum+a[i];
    }
    printf("\ncount = %d",number);
    min=max=a[0];
    for(i=1;i<number;i++)
    {
        if(a[i]<min)
        {
            min=a[i];

        }
    }
    printf("\nminimum value = %d",min);
    for(i=1;i<number;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("\nMaximum value = %d",max);
    printf("\nsum = %.2f",sum);
    mean=sum/number;
    printf("\nMean = %.2f",mean);
    for(i=0;i<number;i++)
    {
        sum1=sum1+(a[i]-mean)*(a[i]-mean);

    }
    varience=sum1/number;

    printf("\nvarience = %.2f",varience);
    printf("\ndeviation = %.2f",sqrt(varience));

    return 0;
}
