//program to calculate power of a number
#include<stdio.h>
#include<math.h>
int main()
{
    int number,n,ans;
    printf("\nEnter the number :");
    scanf("%d",&number);
    printf("\nEnter the power : ");
    scanf("%d",&n);
    ans= pow(number,n);
    printf("%d the power of %d is =  %d",number,n,ans);

    return 0;
}
