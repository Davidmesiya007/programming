//go to statement
#include<stdio.h>
int main()
{
    int i=0;
    david:
    printf("\n%d",i);
    i++;
    if(i<5)
    {
        goto david;
    }
    printf("\nend");
    return 0;
}
