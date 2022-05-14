//find the sum of fist N numbers
#include<stdio.h>
int main()
{
    int sum=0,num,i=1;
    printf("\nEnter Number : ");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum of firs %d is : %d",num,sum);
    return 0;
}
