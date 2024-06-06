#include<stdio.h>
#include<conio.h>
void main()
{
    int physics,chemistry,maths,english,computer,total;
    float percentage;
    printf("Enter the marks of physics:");
    scanf("%d",&physics);
    printf("Enter the marks of chemistry:");
    scanf("%d",&chemistry);
    printf("Enter the marks of maths:");
    scanf("%d",&maths);
    printf("Enter the marks of english:");
    scanf("%d",&english);
    printf("Enter the marks of computer");
    scanf("%d",&computer);
    total=physics+chemistry+maths+english+computer;
    percentage=total/500.0*100;
    printf("The total marks obtained:%d\n",total);
    printf("Percentage obtained:%f\n",percentage);
    getch();
}