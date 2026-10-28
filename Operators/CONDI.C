/*
Conditional statement:
	If we want to check two conditions in a row we use
conditional statement.

Syntax:
	(condition)?stat1:stat2;
Example:   */
#include<stdio.h>
#include<conio.h>
void main()
{
int a=2,b=3;
clrscr();
(a>b)?printf("a is big"):printf("b is big");
getch();
}
