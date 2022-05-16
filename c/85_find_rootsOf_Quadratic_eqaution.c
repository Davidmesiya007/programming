//find roots of quadratic equation
/*
quadratic equation general structure is ax2+bx+c
formula=-b
*/
#include<stdio.h>
#include<math.h>

int main()
{
    float D,root1,root2,imaginary;
    float a,b,c;
    printf("Enter the coefficient of equation a,b and c between spaces :");
    scanf("%f%f%f",&a,&b,&c);
    D=(b*b)-(4*a*c);
    printf("Discriminant is = %.2f",D);
    if(D>0)
    {
        root1=(-b+sqrt(D)/(2*a));
        root2=(-b-sqrt(D)/(2*a));
        printf("\nDiscriminant>0 then 2 real root are exist\n");
        printf("Root1 = %.2f",root1);
        printf("\nRoot2 = %.2f",root2);
    }
    else if(D==0)
    {
        root1=-b/(2*a);
        root2=root1;
        printf("\nDiscriminant==0 then two roots are exist and both are equal");
        printf("\nRoot1 = %.2f",root1);
        printf("\nRoot2 = %.2f",root2);
    }
    else
    {
       root1=root2=-b/(2*a);
       imaginary=sqrt(-D)/(2*a);
       printf("\nD<0 then r roots are equal and imaginary are occured");
       printf("\nroot1=%.2f + %.2f",root1,imaginary);
       printf("\nroot2=%.2f - %.2f",root2,imaginary);
    }

    return 0;

}
