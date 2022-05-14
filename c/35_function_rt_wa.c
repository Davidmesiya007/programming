//written type with arguments
#include<stdio.h>
int add(int,int); //function decleration
int main()
{
    int a,b,c;
    printf("\nEnter the A and B values : ");
    scanf("%d%d",&a,&b);
    c=add(a,b);//function calling with actual parameters
    printf("Total = %d",c);
    return 0;
}
int add(int x,int y) //function definition with formal parameters
{
    int c;
    c=x+y;
    return c; // return value to calling function
}
