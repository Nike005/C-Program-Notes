/*5)Strlwr();
	It is used to convert the uppercase characters into lowercase.

syntax:
	strlwr(string name);*/
#include<stdio.h>
#include<conio.h>
void main()
{
char s1[10];
clrscr();
printf("Enter any string\n");
scanf("%s",s1);
printf("The resulted string is %s",strlwr(s1));
getch();
}