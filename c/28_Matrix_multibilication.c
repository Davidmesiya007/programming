//matrix multiplication
/* we write a program for multiply two matrix we must know how to
multiply two matrix
*/
#include<stdio.h>
int main()
{
    int i,j,n,m,a[100][100],b[100][100],c[100][100],k;
    printf("\nEnter the number of rows:");
    scanf("%d",&n);
    printf("\nEnter the number of columns:");
    scanf("%d",&m);
    printf("\n Enter Array A values");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the value:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the Array B values");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the value:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("The multiplication of the given matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("\t%d",c[i][j]);
        }

        printf("\n");
    }
}
