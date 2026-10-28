/*do...while statement:
	  It is also known as "Exit control Loop".
Syntax:
	do
	{
	 statements;
	}
	while (condition);
Example:*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,n;
 clrscr();
 printf("Enter your range");
 scanf("%d",&n);
 do
 {
 printf("ifc computer education\n");
 i++;
 }
 while(i<n);
 getch();
}