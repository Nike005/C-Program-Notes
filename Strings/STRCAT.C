/*3)Strcat();
	It is an string library function which is used to join two strings
together.The null character of the string1 is removed and after that it joins.
syntax:
	strcat(string1,string2);*/
#include<stdio.h>
#include<conio.h>
void main()
{
char s1[10],s2[10];
clrscr();
printf("Enter any two strings\n");
scanf("%s%s",s1,s2);
printf("The resulted string is %s",strcat(s1,s2));
getch();
}
