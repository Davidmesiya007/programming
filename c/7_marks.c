#include <stdio.h>
int main()
{
    int t, e, m, sc, ss, total;
    float avg;
    printf("\nEnter the marks in Tamil:");
    scanf("%d", &t);
    printf("\nEnter the marks in English:");
    scanf("%d", &e);
    printf("\nEnter the marks in Maths:");
    scanf("%d", &m);
    printf("\nEnter the marks in Science:");
    scanf("%d", &sc);
    printf("\nEnter the marks in Social Science");
    scanf("%d", &ss);
    total = t + e + m + sc + ss;
    avg = (float)total / 5.0;
    printf("\nAggergriate marks is=%d", total);
    printf("\nPercentage marks is=%0.2f", avg);
    return 0;
}