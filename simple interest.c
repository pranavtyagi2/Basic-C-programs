#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float principle,amount,rate,time,simple_interest,compound_interest;
   printf("Enter principle:");
   scanf("%f",&principle);
   printf("Enter rate:");
   scanf("%f",&rate);
   printf("Enter time:");
   scanf("%f",&time);
   simple_interest=(principle*rate*time)/100;
   compound_interest=amount-principle;
   printf("The simple Interest is:%f\n",simple_interest);
   printf("The compound Interest is:%f\n",compound_interest);
   getch();
}