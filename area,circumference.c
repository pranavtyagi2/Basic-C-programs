#include<stdio.h>
#include<conio.h>
void main()
{
    float radius,area,circumference;
    printf("Enter radius:");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("The area of circle:%f\n",area);
    printf("The circumference of cicle:%f\n",circumference);
}