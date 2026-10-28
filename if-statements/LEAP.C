
//Program to find whether the given year is leap year or not:
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int year;
	 clrscr();
	 printf("Enter the year:");
	 scanf("%d",&year);
	 if(year>0)
	 {
	  if(year%4==0)
	  {
	   printf("It is leap year");
	  }
	  else
	  {
	   printf("It is not a leap year");
	  }
	 }
	 else
	 {
	  printf("Invalid year");
	 }
	 getch();
	}

