//goto switch statement program for hotel management
int main()
{

    int n,q,x,net;
    david:
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
        net=net+(q*15);
        break;
    case 2:
        printf("\nyou have selected tea");
        printf("\nEnter the quantity:");
        scanf("%d",&q);
        net=net+(q*10);
        break;
    case 3:
        printf("\nyou have selected Golden Coffee");
        printf("\nEnter the quantity:");
        scanf("%d",&q);
        net=net+(q*25);
        break;
    case 4:
        printf("\nyou have selected Milk Shake");
        printf("\nEnter the quantity:");
        scanf("%d",&q);
        net=net+(q*50);
        break;
    default:
        printf("wrong choice");
        break;
    }
    printf("\nDo you have a continue press 1");
    scanf("%d",&x);
    if(x==1)
    {
        goto david;
    }
    else
    {
        printf("thank you for comming");
    }
    printf("\nTotal Amount is = %d",net);

    return 0;
}
