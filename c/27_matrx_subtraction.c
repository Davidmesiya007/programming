#include<stdio.h>
int main()
{
    //variable decleration
    int i,j,n,m,a[100][100],b[100][100],c[100][100];
    //number of rows and columns input from user
    printf("\nEnter the Rows:");
    scanf("%d",&n);
    printf("\nEnter the Columns:");
    scanf("%d",&m);
    //values of matrix given from user
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the value of location a[%d][%d] is:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter the value of location b[%d][%d] is:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}
