/*Operators:
	1)Arithmetic operator  -+,-,*,/,%
	2)Relational operator  -<, >, <=,>=,==,!=
	3)Logical operator     -&&,|| and !
	4)Increment and decrement operator - ++ and --
	5)Assignment operator  - =
	6)Bitwise operator     - &,|,^,<<,>> and ~
	7)Special operator     - ,(comma) and sizeof()
	8)Conditional operator - ? :
Program using Arithmetic operators:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter  a,b value \n");
scanf("%d%d",&a,&b);
printf("The addition is %d\n",a+b);
printf("The subtraction is %d\n",a-b);
printf("The multiplication is %d\n",a*b);
printf("The division  is %d\n",a/b);
printf("The modulus val is %d\n",a%b);
getch();
}