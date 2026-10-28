/*Bitwise operator :
	It is used to manipulate 0's and 1's for binary calculations.

1)Bitwise and (&) operator.
2)Bitwise or (|) operator.
3)Bitwise exclusive or (^)(carot) operator.
4)Bitwise complement (~) (tild) eoperator.
5)Bitwise shift left  <<
6)Bitwise shift right >>*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter two values");
scanf("%d%d",&a,&b);
c=a&b;
printf("The c val is %d",c);
getch();
}
