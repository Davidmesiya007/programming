//reverse a number
#include<stdio.h>
int main()
{
    int rev=0,num,rem,i;
    printf("\nEnter the number :");
    scanf("%d",&num);//4567
    int original=num;
    for(i=0;num>0;i++)
    {
        rem=num%10; //7
        num=num/10;//456
        rev=(rev*10)+rem;//rev=0+7
    }
    printf("reverse of the %d is : %d",original,rev);
    return 0;

}
