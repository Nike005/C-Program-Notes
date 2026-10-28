/*4) Register variable:
	Normally we store the value of the variable in memory. where as  in
register variable values are stored in cpu registers.It is so faster than
normal variables.*/
#include<stdio.h>
#include<conio.h>
void main()
{
register a=10,b=20;
clrscr();
printf("The sum is %d",a+b);
getch();
}