//Program to find leap year:
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int year;
	 clrscr();
	 printf("Enter the year :");
	 scanf("%d",&year);
	 if(year<0)
	 {
	  printf("Invalid year");
	 }
	 else
	  if(year%4==0)
	  {
	   printf("%d   is leap year   ",year);
	  }
	  else
	  {
	   printf("%d  is not a leap year    ",year);
	  }
	 getch();
	}