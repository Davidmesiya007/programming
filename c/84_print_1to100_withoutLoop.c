//print 1 to 100 without loop
#include<stdio.h>
int display(int x);
int main()
{
    int num=1;
    display(num);

}
int display(int x)
{
    if(x<=100)
       {
        printf("\n%d",x);
        display(x+1);
       }

}
