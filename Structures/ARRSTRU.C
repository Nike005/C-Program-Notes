	//Array of Structures:
	//~~~~~~~~~~~~~~~~~~~~
	#include<stdio.h>
	#include<conio.h>
	struct book
	{
	 char name[10];
	 int no;
	 int per;
	};
	struct book b[3];
	void main()
	{
	 int i;
	 clrscr();
	 for(i=0;i<=3;i++)
	 {
	  printf("Enter book name,no,per");
	  scanf("%s%d%d",b[i].name,&b[i].no, &b[i].per);
	 }
	 for(i=0;i<=3;i++)
	 {
	   printf("\n %s\t%d\t%d",b[i].name,b[i].no,b[i].per);
	 }
	 getch();
	}





