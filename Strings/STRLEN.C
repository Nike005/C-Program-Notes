/*String Library Functions:
	1)strlen();
	2)strcmp();
	3)strcat();
	4)strrev();
	5)strlwr();
	6)strupr();
	7)strcpy();
1)strlen();
	It is a string library funciton which is used to find the
length of the string.
	Syntax:
		strlen(string name);
	*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x;
char name[5];
clrscr();
printf("Enter the name");
scanf("%s",name);
x=strlen(name);
printf("%s has %d character",name,x);
getch();
}