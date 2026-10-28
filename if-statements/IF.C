/*Decision Making Statements:
---------------------------
1. if statement
2. while statement
3. switch case statement

1. if statement
	i)simple if statement
	ii)if...else statement
	iii)if...else ladder
	iv)nesting of if....else

i)Simple if statement:
	If the given condition is true the given statement will be executed
other wise the program will be terminated.

Syntax:
	if(condition)
	{
	statement;
	}*/

#include<stdio.h>
#include<conio.h>
void main()
{
int mark;
clrscr();
printf("Enter your mark:\n");
scanf("%d",&mark);
if(mark>50)
printf("You are pass");
getch();
}