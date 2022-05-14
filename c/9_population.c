/*In a town, the percentage of men is 52. The percentage of total literacy is 48
48. If total percentage of literate men is 35 of the total population. Write a program
to find the total number of illiterate men and women if the population of the town is
80000.

program logic
Total population = 80000.
Total men=52%-->(52/100)*80000
Total women = Total population - men
Total literate men=35%--->(35/100)*80000
Total literacy = (48/100)*80000
Total literate women = Total literate - total literate men
Total illiterate men = Total men - Total literate men
Total illiterate women = Total Women - Total Literate women */
#include<stdio.h>
int main()
{
    int pop,popmen,popwomen,menlit,womenlit,litpop,womenillit,menillit;
    printf("Enter the population of our city=");
    scanf("%d",&pop);
    popmen=(52*80000)/100;
    popwomen=pop-popmen;
    litpop=(48*80000)/100;
    menlit=(35*80000)/100;
    menillit=popmen-menlit;
    womenillit=litpop-menillit;
    printf("\nThe Total population of the city is   :%d",pop);
    printf("\nThe Total population of the men is    :%d",popmen);
    printf("\nThe Total population of the women is  :%d",popwomen);
    printf("\nThe Total Literate population is      :%d",litpop);
    printf("\nThe population of illiterate men is   :%d",menillit);
    printf("\nThe population of illiterate women is :%d",womenillit);

    return 0;

}
