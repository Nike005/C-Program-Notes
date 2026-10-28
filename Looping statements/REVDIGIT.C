	//Reverse the given digit using while loop:
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int n,digit,rev=0;
	 clrscr();
	 printf("Enter the number:");
	 scanf("%d",&n);
	 while(n!=0)
	 {
	  digit=n%10;
	  rev=rev*10+digit;
	  n=n/10;
	 }
	 printf("%d",rev);
	 getch();
	}

	/*     #include<stdio.h>
	     #include<conio.h>
	     void main()
	     {
	      int n=1,a=0;
	      clrscr();
	      a=n%10;
	      printf("%d",a);
	      getch();
	     }   */

