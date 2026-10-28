 /*Functions
 ---------
Introduction:
	Function is a self contained block of statements which is used to
do a particular task.

Advantages:
1)A large problem is decomposed into smaller no of problems.
2)Debugging ,testing, maintanance is so easy.

Types of Function:
	1. Standard Library Function.
	2. User Defined function.

1. Standard library function:
	scanf(),printf(),main() are the standard library functios which is
developed by the programmer.

2.  User defined function:
	These are developed by the user not by the programmer.


General format of  a function:
	return type function name(argument list)
	{
	local variable declaration;
	statement;
	}
Categories of function:
	The function is categorized according to wheather the function passes
value to the called function and returns the value to the calling function or
not.

1. Functions with no argument  no return type.
2. Functions with no argument and return type.
3. Functions with argument and no return type.
4. Functions with argument and return type.
Fnctions with no argument  no return type:
	If a calling function does not pass any argument to the called
function then it is called as Functions with no argument  no return type.

Example:    */
#include<stdio.h>
#include<conio.h>
void msg();     //Function prototype
void main()
{
clrscr();
printf("Welcome to function\n");
msg();
getch();
}

void msg()
{
printf("hai")
getch();
}
