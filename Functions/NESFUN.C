	//Nesting of functions:

	#include<stdio.h>
	#include<conio.h>
	float rat(int a,int b,int c);
	int dif(int a,int b);
	void main()
	{
	 int x,y,z;
	 clrscr();
	 printf("Enter 3 values:");
	 scanf("%d%d%d",&x,&y,&z);
	 printf("%f",rat(x,y,z));
	 getch();
	}
	float rat(int a,int b,int c)
	{
	 dif(b,c);
	 return(a/(b-c));
//	 return (0);
	}
	int dif(int m,int n)
	{
	 if(m!=n)
	printf("Not Equal ");
	// return 1;
	 else
	 printf("equal");
	 getch();
//	 return 0;
	}



