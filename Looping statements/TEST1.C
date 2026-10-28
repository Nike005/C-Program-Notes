/*	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i,j;
	 clrscr();
	 for(i=1;i<=5;i++)
	 {
	  for(j=1;j<=i;j++)
	  {
	   printf("%d\t ",j);
	  }
	  printf("\n");
	 }
	 getch();
	}*/

	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i,j,n;
	 clrscr();
	 printf("Enter the n value:");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	  for(j=1;j<=i;j++)
	  {
	   printf("%d\t",j);
	  }
	  printf("\n");
	 }
	 getch();
	}

