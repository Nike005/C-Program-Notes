 //Recursion function for finding factorial of a given no:

	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int a;
	 clrscr();
	 printf("Enter the number:");
	 scanf("%d",&a);
	 printf("The factorial of %d = %d",a,rec(a));
	 getch();
	}
	rec(int x)
	{
	 int f;
	 if(x==1)
	  return(1);
	 else
	  f=x*rec(x-1);
	   return(f);
	}

