//1.Student Mark List

void main()
{
	int reg[2];
	char name[2][20];
	int i=0,tot[2];
	int t[2],e[2],m[2],s[2],h[2];

	while(i<2)
	{
	clrscr();
	printf("\n Reg No Name  T E M S H:");
	scanf("%d%s%d%d%d%d%d",&reg[i],name[i],&t[i],&e[i],&m[i],&s[i],&h[2]);
	tot[i]=t[i]+e[i]+m[i]+s[i]+h[i];
	i++;
}
i=0;
while(i<2)
	{
	clrscr();
	printf("\n\n");
	printf("\n			Student Mark list ");
	printf("\n-------------------------------------");
	printf("\n%d				%s",reg[i],name[i]);
	printf("\n-------------------------------------");
	printf("\nTamil				%d",t[i]);
	printf("\nEng				%d",e[i]);
	printf("\nMaths			%d",m[i]);
	printf("\nScience			%d",s[i]);
	printf("\nHistory			%d",h[i]);
	printf("\n-------------------------------------");
	printf("\n                Total      %d",tot[i]);
	printf("\n-------------------------------------");
	getch();
	i++;
	}
	getch();
	}
/*
Get a 5  Employee PaySlip:
	sno,name ,Bpay,Hra,da,Gpay,lic,pf,ded,npay
------------------------------------------------------------------------------------------------------------------------------------
			Employee Pay Slip
------------------------------------------------------------------------------------------------------------------------------------
sno Name Basic
------------------------------------------------------------------------------------------------------------------------------------
1
2
3
4
5
------------------------------------------------------------------------------------------------------------------------------------
Grass pay			Ded			Net Pay
------------------------------------------------------------------------------------------------------------------------------------
Get a 5  Departmrnt Stores:
	Sno  name  qty Rate Total Disc (3%) Total
------------------------------------------------------------------------------------------------------------------------------------
			Kannan Department Stores
------------------------------------------------------------------------------------------------------------------------------------
sno Name Basic
------------------------------------------------------------------------------------------------------------------------------------
1
2
3
4
5
------------------------------------------------------------------------------------------------------------------------------------
						Amount
------------------------------------------------------------------------------------------------------------------------------------

*/


//2.Find a Maximum Student Mark :
/*
#include<stdio.h>
void main()
{
	int mark[5],i,max;
	clrscr();
	printf("Enter 5 student Mark\n");
	for(i=0;i<5;i++)
	{
	printf("Enter %d student Mark\t",i+1);
	scanf("%d",&mark[i]);
}
max=mark[0];
for(i=0;i<5;i++)
{
	if(mark[i]>max)
	max=mark[i];
}
printf("The Maximum Mark is %d\n",max);
getch();
}     */


//3.Display Student Mark List:  (Two Diamention Arrays)
/*void main()
{
	int stud[10][2],i;
	for(i=0;i<10;i++)
	{
	printf("Enter Reg No   :\n");
	scanf("%d",&stud[i][0]);
	printf("Enter Mark  :");
	scanf("%d",&stud[i][1]);
}

	for(i=0;i<10;i++)
{
	printf("\n\n");
	printf("Reg No      %d\n",stud[i][0]);
	printf("Mark        %d\n",stud[i][1]);
}
getch();
}             */

//4.Student Rank List:
/*
#include<stdio.h>
void main()
{
	int regno[5],mark[5],i,j,temp;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter Reg No   :\n");
		scanf("%d",&regno[i]);
		printf("Enter Mark     :\n");
		scanf("%d",&mark[i]);
       }
	for(i=0;i<5;i++)
	   for(j=i+1;j<5;j++)
		if(mark[i]<maxk[j])
		{
			temp=mark[j];
			mark[i]=mark[j];
			mark[j]=temp;
			temp=regno[i];
			regno[i]=regno[j];
			regno[j]=temp;
		}
	printf("\nRank             Roll No        Mark  ");
	for(i=0;i<5;i++)
	printf("\n%d\t%d\t%d",i+1,regno[i]mark[i]);
	getch();
}             */



//5.Find out Matrics Programs.

//int a[3][3],b[3][3],c[3][3];
//int row,col;
/*#include<stdio.h>
void main()

{
	int i,ch;
	void create(),add(),sub(),mul();
	int disp();
	do
	{
		printf("1.Creation  \n");
		printf("2.Addition  \n");
		printf("3.Subtraction  \n");
		printf("4.Multification  \n");
		printf("5.Exit  \n");
		printf("Enter your choice .....\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:create();
				break;

			case 2:add();
				break;
			case 3:sub();
				break;
			case 4:mul();
				break;
			case 5:exit();
		}
		}while(ch>=1 && ch<=5);
		getch();
		}

		void create()
		{
			int i,j;
			printf("Enter the No of rows and cols for Matrics");
			scanf("%d  %d",&row,&col);
			printf("Enter Matrics A\n");

			for(i=0;i<row;i++)
				for(j=0;j<col;j++)
				scanf("%d",&a[i][j]);
			printf("Enter Matrics B\n"):

			for(i=0;i<row;i++)
				for(j=0;j<col;j++)
				scanf("%d",&b[i][j]);
			printf("Matrics A is\n");
			disp(a);
			return;
		}

		void add()
		{
			int i,j;
			printf("After Add Operations\n");

			for(i=0;i<row;i++)
				for(j=0;j<col;j++)
				c[i][j]=a[i][j]+b[i][j];

			printf("The Resultant Matrics is\n");
			disp(c);
			return;
		}

		void sub()
		{
			int i,j;
			printf("After Sub Operations\n");

			for(i=0;i<row;i++)
				for(j=0;j<col;j++)
				c[i][j]=a[i][j]-b[i][j];

			printf("The Resultant Matrics is\n");
			disp(c);
			return;
		}
		void mul()
		{
			int i,j,k;
			printf("After Mul Operations\n");

			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
				c[i][j]=0;
			for(k=0;k<col;k++)

				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}

			printf("The Resultant Matrics is\n");
			disp(c);
			return;
		}

		int disp(int mat[3][3])
		{
			int i,j;
			for(i=0;i<row;i++)
			  for(j=0;j<col;j++)
			{
				printf("%d\t",mat[i][j]);
			}
			printf("\n");
			return;
		getch();
		}             */

//------------------------------------------------------------------------------------------------------




//Two Dimension Arrays:
/*
#include<stdio.h>
main()
{
	int a[100][100],i,j,m,n;
	clrscr();
	printf(""\n Enter Row Number :");
	scanf("%d",&m);
	printf("\n Enter Col Number :");
	scanf("%d",&n);
	printf("\nEnter the Elements :");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("\n\tThe Matrix  is :\n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		printf("%4d",a[i][j]);
	}
	printf("\n");
	}
	printf("The Transpose of Matrics is \n");
	for(j=0;j<n;j++)
	{
	for(i=0;i<m;i++)
	{
	printf("%4d",a[i][j]);
	}
	printf("\n");
	}
	getch();
}             */

