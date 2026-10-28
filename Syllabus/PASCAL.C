	//Program to Construct Pascal Triangle:
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int n,i,j,temp;
	 clrscr();
	 printf("Enter the number of lines to print:");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	  for(j=1;j<=n-i;j++)
	   printf("  ");
	   temp=i;
	   for(j=1;j<=i;j++)
	   printf("%4d",temp++);
	   temp=temp-2;
	   for(j=1;j<i;j++)
	    printf("%4d",temp--);
	    printf("\n\n");
	   }
	  printf("\n");
	  getch();
	 }