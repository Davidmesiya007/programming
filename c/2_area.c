#include<stdio.h>

int main()
{
    float r_area,c_area,r_cir,c_cir;
    int w,h,r;
    printf("enter the height and widht of the rectangle:");
    scanf("%d%d",&h,&w);
    printf("enter the radius of the circle:");
    scanf("%d",&r);
    r_area=w*h;
    r_cir=2*(w+h);
    c_area=3.14*(r*r);
    c_cir=2*3.14*r;
    printf("\ncircumstance of the rectangle is=%0.2f",r_cir);
    printf("\narea of the rectangle is=%0.2f",r_area);
    printf("\ncircumstance of the circle is=%0.2f",c_cir);
    printf("\narea of the circle is=%0.2f",c_area);
    return 0;

}

