/*IF...ELSE STATEMENT:
	If the given condition is true the true statement will be executed,
otherwise the false statement will be executed.
Syntax:
	if (condition )
	{
	 true statement;
	}
	else
	{
	 false statement;
	}

Example:    */

#include<stdio.h>
#include<conio.h>
/*void main()
{
int age;
clrscr();
printf("Enter your age:");
scanf("%d",&age);
if(age>=18)
{
printf("You are eligible for vote");
}
else
{
printf("You are not eligible for vote");
}
getch();
} */
//Program to find the biggest of two numbers:
/*
void main()
{
 int a,b;
 clrscr();
 printf("enter a,b values:");
 scanf("%d%d",&a,&b);
 if(a>b)
 {
  printf("A is big");
 }
 else
 {
  printf("B is big");
 }
 getch();
} */

//program to check whether the given no is positive or not:
     /*	void main()
	{
	 int a;
	 clrscr();
	 printf("Enter the a val:");
	 scanf("%d",&a);
	 if(a>0)
	 {
	  printf("A is +ve");
	 }
	 else
	 {
	  printf("A is -ve");
	 }
	 getch();
	}*/
//Program to print the Total, Average, Grade and Pass / Fail for Student Marks:

	void main()
	{
	 int tam,eng,mat,sci,soc,tot;
	 float avg;
	 clrscr();
	 printf("Enter the 5 subjects mark:");
	 scanf("%d%d%d%d%d",&tam,&eng,&mat,&sci,&soc);
	 tot=tam+eng+mat+sci+soc;
	 avg=tot/5;
	 if(avg>60)
	 {
	  printf("\nFirst Grade\n");
	 }
	 else
	 {
	  printf("\nSecond Grade\n");
	 }
	 if(tam>=35&&eng>=35&&mat>=35&&sci>=35&&soc>=35)
	 {
	  printf("\n***********Pass************\n");
	 }
	 else
	 {
	  printf("\n************Fail************\n");
	 }
	 getch();
	}







