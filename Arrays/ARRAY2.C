/*Two Dimentional Array:
------------------------
	The  two dimentional array is also called a matrix.

Declaration of two dimentional array:
------------------------------------

datatype array name[row_size][col_size];

eg:
	int student[row_size][col_size];
Example: */

#include<stdio.h>
#include<conio.h>
void main()
{
int stud[4][2];
int i,j;
clrscr();
for(i=0;i<=3;i++)
{
	printf("Enter rollno and marks");
	scanf("%d%d",&stud[i][0],&stud[i][1]);
	}
	for(i=0;i<=3;i++)
	printf("\n%d\t%d",stud[i][0],stud[i][1]);
	getch();
	}
