/*
Structure:
	Structure is a constructed datatype. It is a method of packing
different datatypes in the structure.

General form:
	struct tagname
	{
	datatype member1;
	datatype member2;
	.
	.
	.
	datatype membern;
	};
Rules for declaring a structure:
1. A structure must end with a semicolon.
2. Usually a structure appears at the top of the source program.
3. Each structure element must be terminated.
4. The structure variable must be accessed with structure variable with
   dot (.) operator.

Example1:  */
//Initialization:
     /*	#include<stdio.h>
	#include<conio.h>
	struct ifc
	{
	 int a;
	 float b;
	 char c;
	};
	void main()
	{
	 struct ifc x={20,23.34,'h'};   //Object Creation
	 clrscr();
	 printf("%d\n\n %.2f\n\n %c\n\n",x.a,x.b,x.c);
	 getch();
	}
       */
//Structure Declaration:

#include<stdio.h>
#include<conio.h>
struct book
{
	char name[10];
	int pages;
	float price;
};
void main()
{
struct book a;
clrscr();
printf("Enter the book name,pages,price\n");
scanf("%s%d%f",a.name,&a.pages,&a.price);
printf("Book name :%s\n",a.name);
printf("Pages     :%d\n",a.pages);
printf("Price     :%.2f\n",a.price);
getch();
}