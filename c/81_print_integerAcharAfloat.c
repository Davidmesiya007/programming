//c program to print integer character and float value
int main()
{
    int number;
    float decimal;
    char a;
    printf("Enter the any number,character and decimal between spaces : ");
    scanf("%d %c %f",&number,&a,&decimal);
    printf("number    : %d",number);
    printf("\ncharacter : %c",a);
    printf("\ndecimal   : %.2f",decimal);
    return 0;
}
