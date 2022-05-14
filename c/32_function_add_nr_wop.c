//function without arguments no return values
#include<stdio.h>
void add();//function decleration
int main()
{

    add(); //Function calling
    return 0;
}
//Function definition
void add()
{
    int a,b,c;
    printf("\nEnter the A and B : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal=%d",c);
}
