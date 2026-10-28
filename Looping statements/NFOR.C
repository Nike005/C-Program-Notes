/*Nesting of for loop:
	If one for statement inside the other is known as Nesting of for
statement.

Example:    */

#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,sum;
clrscr();
for(r=1;r<=3;r++)
{
	for(c=1;c<=2;c++)
	{
	sum=r+c;
	printf("r=%d c=%d sum=%d\n",r,c,sum);
	}
}
getch();
}