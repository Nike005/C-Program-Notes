/*Scope & Lifetime of variables:
Scope :
	Scope is the time of the variable which is active in a program or
function.

Life time:
	The variable which is active any where in the program, in use.

Storage classes:

	1)Automatic variables.
	2)External variables.
	3)Static variables.
	4)Register variables.
1)Automatic variables:
	It is a local or internal variables which is active at a particular
function.

Ex:*/
#include<stdio.h>
#include<conio.h>
void fun1(void);
void main()
{
auto int x=10;
clrscr();
fun1();
printf("Now x is %d\n",x);
getch();
}
void fun1()
{
int x=30;
printf("x is %d\n",x);
}
