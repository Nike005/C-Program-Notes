//Nesting of if....else statement:
/* Syntax:
	if(condition 1)
	{
	 if (condition 2)
	 {
	  statement x;
	 }
	 else
	 {
	  statement y;
	 }
	else
	if (condition 3)
	{
	 statement s;
	}
	else
	{
	 statement p;
	}
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the val of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
	if(a>c)
	{
		printf(" a is big");
	}
else
	{
		printf("C is big");
	}
}
else
{

if(c>b)
	{
		printf("C is big");
	}
else
	{
		printf("B is big");
	}
}
getch();
}
