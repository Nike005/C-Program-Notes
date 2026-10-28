/*Decision Making with Looping statements:

	If we want to execute a loop continuously we use looping statements.
		1)while loop.
		2)do....while loop.
		3)for statement.

While statement:
	If we want to run a sequence of condition we use while statement.
It is also known as "Entry controlled loop".
Syntax:
	while(condition)
	{
	 statements;
	}*/
//Example:
/*#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0;
 clrscr();
 while (i<=100)
 {
 printf("Welcome");
 i++;
 }
 getch();
}             */

#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,n;
 clrscr();
 printf("Enter the range");
 scanf("%d",&n);
 while(i<=n)
 {
  printf("The i val is :%d\n",i);
  i++;
 }
 getch();
}


//do...while statement:

 /*Syntax:
	do                     //Exit control loop
	{
	 statements;
	}
	while(condition);
		   */
/*
#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,n;
clrscr();
printf("Enter the n value");
scanf("%d",&n);
do
{
printf("%d\n",i);
i++;
}
while (i<=n);
getch();
} */
