/*Indirection operator:
	* is the indirection operator or content operator which is used to
retrive the content of the variable which is pointed by the pointer.

Ex:*/
#include<stdio.h>
#include<conio.h>
void main()
{
int *p,x=10;
clrscr();
p=&x;
printf("Content is %d",*p);
getch();
}