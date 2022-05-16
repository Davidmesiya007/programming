//Using function cube, square and square root
#include<stdio.h>
#include<math.h>
int square(int x);
int cube(int x);
float square_root(int x);
int main()
{

    int number,c,s,sqarRt;
    float squarRt;
    printf("\nEnter the number:");
    scanf("%d",&number);
    c=cube(number);
    s=square(number);
    squarRt=square_root(number);
    printf("\ncube of number %d is %d",number,c);
    printf("\nsquare of number %d is %d",number,s);
    printf("\nsquare root of %d is : %.2f",number,squarRt);


}
int cube(int x)
{
    return x*x*x;
}
int square(int x)
{
    return x*x;
}
float square_root(int x)
{
    return sqrt(x);
}
