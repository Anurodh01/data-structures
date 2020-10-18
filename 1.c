#include<stdio.h>
int main()
{
    float r,area,circumference;
    float const pi=3.14;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    area=pi*r*r;
    circumference=2*pi*r;
    printf("area of circle=%f\ncircumference of circle=%f ",area,circumference);
    return 0;
}
