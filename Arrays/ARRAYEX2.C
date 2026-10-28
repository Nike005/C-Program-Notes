/*----------------------------------------------------------------------------------------------------------------------------
			Arrays
----------------------------------------------------------------------------------------------------------------------------
An array is a group of related data items that share a common name.



int sno[5] =12345

Syntax:
	DataType <variableName>[size];

Declaration of Arrays :
	int mark[5]; 0,1,2,3,4  -Index
	Get a 5 Student Mark list.

	int	=DataTYpe
	mark	=element or Variable
	5	=index  0 1 2 3 4

Entering Element of an Array

	for(i=0;i<3;i++)
	{
		printf("\nEnter the Mark :");
		scanf("%d",&mark[i]);
	}
Reading Data from an Array:
	for(i=0;i<3;i++)
		sum=sum+mark[i];
	printf("\nThe Result is :%d",mark[i]);

Types of arrays:
	1.Single Dimensional Arrays Example : int mark[5]
	2.Two Dimensional Arrays	    : int mark[3][3]
	3.Multidimensional Arrays	    : int mark[3][3][3]

Single Dimensional Arrays:
	A list of items can be given a variable name using only one
subscripted and such a variable is called a single dimensition array

Syntax:
    DataType VariableName[size]

Example: To Dislay a 5 Numbers.*/
/*	void main()
	{
		int a[5],i;
		clrscr();
		printf("\nEnter the 5 Numbers :");
		for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<5;i++)
		{
			printf("The  Display  numbers is :%d\n",a[i]);
		}
		getch();
	}  */


//Example: To find sum of 5 Numbers.
#include<stdio.h>
#include<conio.h>
/*void main()
{
	int a[5],i,sum=0;
	clrscr();
	printf("\n Enter the Numbers :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nSum of Numbers :%d",sum);
	getch();
}
 */


//Example:	To write a prg to find sum and average marks of 5 student.
/*void main()
{
	int sum=0;
	float avg;
	int mark[5],i;       // Array Declaration
	clrscr();
	printf("\nEnter the Mark :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&mark[i]);		// Store data in array
		sum=sum+mark[i];
		avg=sum/5;
	}
		// Read data from an array
		printf("\nTotal Marks is :%d",sum);
		printf("\nAverage Marks is :%f",avg);
		getch();
} */

//Example:This prg to demo how to print number from the Array Reverse Order.

/*       void main()
	{
		int a[5],i;
		clrscr();
		printf("\nEnter the 5 Numbers :");
		for(i=1;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=5;i>0;i--)
		{
			printf("The Reverse   numbers is :%d\n",a[i]);
		}
		getch();
	}                */

//Example:   This prg to demo how to print odd position from the array.

/*void main()
{
	int a[5],i;
	clrscr();
	printf("\nEnter the Numbers :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i=i+2)
	{
		printf("\nThe odd Number is :%d",a[i]);
	}
	getch();
}*/

//Example:This prg to demo how to print Even position from the array.
/*
void main()
{
	int a[5],i;
	clrscr();
	printf("\nEnter the Numbers :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=4;i=i+2)
	{
		printf("\nThe Even  Number is :%d",a[i]);
	}
	getch();
}*/

//Example:This prg to demo how to find biggest and Smallest from the Array.

/*void main()
{
	int a[5],i,b,s;
	clrscr();
	//b=a[0];
       //	s=a[0];
	for(i=0;i<=4;i++)
	{

		scanf("%d",&a[i]);
			b=a[i];
	s=a[i];
		if(a[i]>b)
		{
		  b=a[i];
		}
		if(a[i]<s)
		{
		  s=a[i];
		}
	}
	printf("\nThe Biggest Number is :%d",b);
	printf("\nThe Smallest Number is :%d",s);
	getch();
} */

//Example:This prg to demo how to exchange value among variable.
/*main()
{
	int a,b,t;
	clrscr();
	printf("\nEnter the Two Numbers :");
	scanf("%d%d",&a,&b);
	printf("\n Before the Swap ");
	printf("\nA and B Values Is   :%d%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\n After the Swap ");
	printf("\nA and B Values Is   :%d%d",a,b);
	getch();
} */

/*Array Initialization:
	The elements of the array can be assigned initial values by following the array definition
with the list of initial values enclosed in braces and separated by commas.

Syntax:
	 DataType VariableName [size]={List of value};

	int mark[5]={45,56,45,56,67}; or
	int mark[]={45,56,45,56,67};

	char name[7]={'w','e','l','c','o','m','e','\0'};

	char name[10]';
	End of string value ='\0'*/


//Note: 	A string is an array of characters which can be terminated by the null character '\0'.
//Example:

//Display a Month days.
/*	void main()
	{
	 int month[12];
	 clrscr();
	 month[0]=31;
	 month[1]=28;
	 month[2]=31;
	 month[3]=30;

	 printf("March has   %d :",month[2]);
	 getch();
	}         */

//Example:
/*	void main()
	{
	int month[]={31,28,31,30,31,30,31,30,31,30};
	clrscr();
	printf("March has  :%d",month[3]);
	getch();
	}*/

//Example:      Average an array of value:
/*void main()
	{
	int month[]={30,30,30,30,30};
	double res=0;
	int i=0;
	clrscr();
	for(i=0;i<5;i++)
	res=res+month[i];
	printf("Average is  :%d",res/5);
	getch();
	}*/

/*Example:
	sno,name,m1,m2,m3,total,avg
		for 5 Student

--------------------------------------------------------------------------------------------------------------------------------
2.Two Dimensional Arrays:

Syntax:
			DataType VariableName[size][size]
		size 1	=row
		size 2	=coloumn

Example:
int mark[4][2]

		Col No 0		Col No:1
Row No :0
Row No :1
Row No :2
Row No :3

		0,0  0 1
		1,0  1,1
		2,0  2,1
		3,0  3,1*/

//Example:	To Get the 3 rows  And 3 Colums .
/*
void main()
{
	int i,j,n[3][3];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&n[i][j]);
	}
	for(i=0;i<3;i++)
	{
		printf("\n");
	for(j=0;j<3;j++)
		printf("%d\t",n[i][j]);
	}
	getch();
}*/


//Example:	Display roll Numbers and Marks.
/*
void main()
{
	int stud[4][2];

	int i;
	clrscr();
	for(i=0;i<=3;i++)
	{
		printf("\nEnter the Roll No and Marks :");
		scanf("%d%d",&stud[i][0],&stud[i][1]);
	}
	for(i=0;i<=3;i++)
	{
		printf("\n%d\t%d",stud[i][0],stud[i][1]);
	}
	getch();
} */

//Convert 2d To 1 Dimention Arrays
/*
void main()
	{
	int d2[3][3]={1,2,3,4,5,6,7,8,9};
	int o1[9];
	int ij,cnt=0;
	clrscr();
	printf(" 2 Dimensional Array \n\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	o1[cnt]=d2[i][j];
	printf("  %3d",d2[i][j]);
	cnt++;
	}
	printf("\n");
	}

	printf("\n 1 Dimensional Array \n\n\n");
	for(i=0;i<cnt;i++)
	printf("  %3d \n",o1[i]);
	getch();
} */