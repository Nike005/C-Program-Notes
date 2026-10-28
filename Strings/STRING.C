/*Strings:
	A string is a sequence of characters.

Ex:
	"world" , "ABC" , "123" , "###"
	A string is always enclosed within double quotes.In C there is no
datatype for string. So we have to use character array for the given string.

Declaration:
	char var_name[size];

	Eg:
	     char name[5];
	The null character denotes the end of the string.
Initialization of a string:
	String can be initialized with the help of {  and }.*/

#include<stdio.h>
#include<conio.h>
void main()
{
char name[15]="ifccomputer";
clrscr();
printf("%s",name);
getch();
}