/*1. Arithmetic operators:
------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter two integers");
 scanf("%d%d",&a,&b);
 printf("The addition is %d\n",a+b);
 printf("The Subtraction is %d\n",a-b);
 printf("The Multiplication is %d\n",a*b);
 printf("The Division is %d\n",a/b);
 printf("The Modulus val is %d",a%b);
getch();
}