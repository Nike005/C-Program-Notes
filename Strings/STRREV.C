/*4)strrev();
	It is an string library function which is used to reverse the string.
syntax:
	strrev(string name);*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
clrscr();
printf("Enter any name\n");
scanf("%s",a);
//strrev(a);
printf("The string reverse is %s",strrev(a));
getch();
}