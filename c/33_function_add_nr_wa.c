//with arguments no return values
#include<stdio.h>
void add(int,int); //Function decleration
int main()
{
    int a,b;
    printf("\nEnter the A and B values : ");
    scanf("%d%d",&a,&b);
    add(a,b);//function calling, a,b are the Actual parameter
    return 0;
}
void add(int x,int y)//x and y are the Formal Parameter
{
    int c;
    c=x+y;
    printf("\nTotal = %d",c);
}
