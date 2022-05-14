//Return type without arguments
#include<stdio.h>
int add(); //function declaration
int main()
{
    int a;
    a=add();
    printf("\nTotal = %d",a);
    return 0;
}
int add()
{
 int x,y,c;
 printf("\nEnter the X and Y values : ");
 scanf("%d%d",&x,&y);
 c=x+y;
 return c;
}
