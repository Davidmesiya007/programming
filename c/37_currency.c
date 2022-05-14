/*The cashier has currency notes of dominations 10, 50 and 100.
If the amount to be withdrawn is input through the keyboard in hundreds.
find the total number of currency notes of each domination the
cashier will have to give the withdrawer.

Program Logic
amount=1574
hundred=amount/100 ==>15
fifty=(amount%100)/50 ==>1
ten=((amount%100)%50)/10 ==>2
coins remain==((amount%100)%50)%10 ==>4
*/
#include<stdio.h>
int main()
{
    int amt,hun,fif,ten,coin;
    printf("Enter the number:");
    scanf("%d",&amt);
    hun=amt/100;
    fif=(amt%100)/50;
    ten=((amt%100)%50)/10;
    coin=((amt%100)%50)%10;
    printf("\nnumber of hundreds    :%d",hun);
    printf("\nnumber of fifties     :%d",fif);
    printf("\nnumber of tens        :%d",ten);
    printf("\nremaining coins in rs :%d Rs",coin);
    return 0;
}








