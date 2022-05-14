/*School Result Management
1.Five Marks Input through the keyboard
2.Find total and average of the given marks.
3.Find the result whether the given marks must be >=35
4.Grade as per the following condition.
    90-100 - A Grade
    80-89  - B Grade
    70-79  - C Grade
    <70    - D Grade
    Fail   -No Grade
    */
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\nEnter the marks of Tamil, English, Maths, Science, Social Science\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=(m1+m2+m3+m4+m5);
    avg=total/5.0;
    printf("\nThe total marks is=%d",total);
    printf("\nThe average marks is=%0.2f",avg);
    if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
    {
        printf("\nThe pass");
        if(avg>90 &&avg<=100)
        {
            printf("\nA Grade");
        }
        else if(avg>80 && avg<=90)
        {
            printf("\nB Grade");
        }
        else if(avg>70 && avg<=80)
        {
            printf("\nC Grade");
        }
        else
        {
            printf("\nD Grade");
        }
    }
    else
    {
        printf("\n you fail");
        printf("\n No grade");
    }



}

