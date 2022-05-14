//find the sum and factorial of N number
/*
here, we find sum of N number
and factorial of N number

sum of first N Number is nothing but user given input N=10
the output is 1+2+3+4+5+6+7+8+9+10=55

factorial of N number is nothing but user given input N=10
the output is 10*9*8*7*6*5*4*3*2*1=720
 */
 #include<stdio.h>
 int main()
 {
     int num, fact=1, sum=0, option,j,i;
     printf("\nEnter the number:");
     scanf("%d",&num);
     printf("operation");
     printf("\n---------------------");
     printf("\n1.Sum of first N number ");
     printf("\n2.Factorial");
     printf("\nChoose your operation :");
     scanf("%d",&option);
     switch(option)
     {
     case 1:

        for(i=1;i<=num;i++)
        {
            sum=sum+i;
        }
        printf("\nSum of fist N number is : %d",sum);
        break;

     case 2:
        for(j=num;j>0;j--)
        {
            fact=fact*j;
        }
        printf("Factorial of %d is : %d ",num,fact);
        break;
     }


  return 0;
 }

