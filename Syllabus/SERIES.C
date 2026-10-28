	//Program to find the sum of series 1+(1+2)+(1+2+3).....n
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i,j,n,s,term;
	 clrscr();
	 printf("Enter the value n:");
	 scanf("%d",&n);
	 s=0;
	 for(i=1;i<=n;i++)
	 {
	  term=0;
	  for(j=1;j<=i;j++)
	  {
	   term=term+j;
	  }
	  s=s+term;

	 printf("Sum of series S=%d",s);
	 }
	 getch();
	 }