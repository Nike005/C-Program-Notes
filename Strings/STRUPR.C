/*5)Strupr();
	It is used to convert the lowercase characters into uppercase.

syntax:
	strupr(string name);*/
#include<stdio.h>
#include<conio.h>
void main()
{
char s1[10];
clrscr();
printf("Enter any string\n");
scanf("%s",s1);
printf("The resulted string is %s",strupr(s1));
getch();
}
