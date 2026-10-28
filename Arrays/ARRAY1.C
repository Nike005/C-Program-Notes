/*Arrays:
	An Array is a collection of related data items that share a common
name.
Types:
1)One Dimentional Array.
2)Two Dimentional Array.
3)Multi Dimentional Array.

1)One Dimentional Array:

array declaration:
	datatype array_name[size];

eg:
	int table[5];

Example:       */
//ASCII - To find the(American Standard Code for International  Interchange)
//value of a character.
#include<stdio.h>
#include<conio.h>
void main()
{
int array[26],i;
clrscr();
for(i=0;i<=25;i++)
{
	array[i]='A'+i;
	printf("\n %d %c",array[i],array[i]);
}
getch();
}