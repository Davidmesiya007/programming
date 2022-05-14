//program for find absolute value using abs function
/*first of all abs() is stands for absolute function
It is used for convert negative number to absolute number.
stlib.h header file has abs function. before use this
bult in function you must add stlib header file. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,absNum;
    printf("\nPlease enter the number:");
    scanf("%d",&num);
    absNum=abs(num);
    printf("Absolute value of %d is : %d",num,absNum);
    return 0;
}
