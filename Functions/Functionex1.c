----------------------------------------------------------------------------------------------------
		Function
-----------------------------------------------------------------------------------------------------

	1.Pre-defined Fuction
	2.User Defined Function

1.Pre-Defined Function:

1.strlen		-finds length of string
2.strlwr		-Converts a string to lowercase
3.strupr		-Converts a string to Uppercase
4.strcat		-Appends one string at the end of another string
5.strcpy		-Copies a string into another String
6.strncpy		-Copies first n character of one string into another string
7.strcmp		-Compares two string
8.strdup		-Duplicates a string
9.strchr		-Finds first occurrence of a given char in a string
10.strrev		-Reverses strings.


1.strcat()	

Syntax:
	strcat(string1,strings2)

2.strcmp

Syntax:
	strcmp(strings1,strings 2)

3.strcpy		

Syntax:
	strcpy(strings1,strings 2)

4.strlen		

Syntax:
	n=strlen(strings)

1.Join a Two string:

#include<stdio.h>
main()
{
	char s[10],s1[10];
	clrscr();
	p("\nEnter The First String :);
	gets(s1);
	p("\nEnter The Second String :);
	gets(s);
	clrscr();
	strcat(s1,s);
	p("%s",s1);
	getch();
}
2.String Comparation:

#include<stdio.h>
main()
{	
	char s1[10],s2[10];
	char y;
	d:clrscr();
	p("\nEnter the First String :");
	scanf("%s",s1);
	p("\nEnter the Second String :");
	scanf("%s",s2);
	
	if(strcmp(s1,s2)>0)
		p("s1 is greater than s2");
	if(strcmp(s1,s2)<0)
		p("s2 is greater than s1");
	if(strcmp(s1,s2)==0)
		p("s1 is Equak to s2");
	p("\nDo you want to continues....(Y or N);
	y=getch();

	if(y=='Y' || y=='y')
	goto d:
	getch();
}
		
3.

strlen,strcpy,strcmp

Example:


