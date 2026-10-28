/*7)Strcpy();
	It is a string library function which is used to copy one string to
another.
syntax:
	strcpy(string1,string2);*/
#include<stdio.h>
#include<conio.h>
void main()
{
char s1[10],s2[10];
clrscr();
printf("Enter the s2 string\n");
scanf("%s",s2);
printf("The resulted string s1 is %s",strcpy(s1,s2));
getch();
}