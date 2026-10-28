/*Pointers and Character array:
-----------------------------
Example:
	      */
#include<stdio.h>
#include<conio.h>
void main()
{
char name[10]="computer",*p;
clrscr();
p=name;
while(*p!='\0')
{
 printf("%c is stored at address %u\n",*p,p);
 p++;
}
getch();
}