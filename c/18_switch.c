/*
write a program for the following output using switch case

    Menu Card
    1.COFEE         Rs:15
    2.TEA           Rs:10
    3.GOLD COFEE    Rs:25
    4.MILK SHAKE    Rs:50

Enter your choice:2
you have selected tea
Enter the quanitity:5
Total amount:50
*/
#include<stdio.h>
int main()
{

    int n,q;
    printf("\n                ----------------------");
    printf("\n\t\tMENU CARD");
    printf("\n                ----------------------");
    printf("\n\t\t1.COFFEE      Rs:15");
    printf("\n\t\t2.TEA         Rs:10");
    printf("\n\t\t3.GOLD COFFEE Rs:25");
    printf("\n\t\t4.MILK SHAKE  Rs:50");
    printf("\nEnter your choice:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("You have selected cofee");
        printf("Enter the quantity:");
        scanf("%d",&q);
        printf("\nTotal Amount is = %d",q*15);
        break;
    case 2:
        printf("\nyou have selected tea");
        printf("\nEnter the quantity:");
        scanf("%d",&q);
        printf("\nTotal Amount is = %d",q*10);
        break;
    case 3:
        printf("\nyou have selected Golden Coffee");
        printf("\nEnter the quantity:");
        scanf("%d",&q);
        printf("\nTotal Amount is = %d",q*25);
        break;
    case 4:
        printf("\nyou have selected Milk Shake");
        printf("\nEnter the quantity:");
        scanf("%d",&q);
        printf("\nTotal Amount is = %d",q*50);
        break;
    }

return 0;
}

