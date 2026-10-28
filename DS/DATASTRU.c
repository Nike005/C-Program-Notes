--------------------------------------------------------------------------------------------------
			Data Structure
-------------------------------------------------------------------------------------------------

Two types of data structure:
	1.Linear Data structure
	2.Non Linear Data structure

1. Linear Data structure:
   	-One to one relationship between data and store.
Example:
	Array,stacks,Queues,Linked Lists.

2.Non Linear Data structure:
	-One to many relationship between data items and stores.
Example:
	Trees,Graphics,Networks

Abstract Data Types:
	-Data structure definition and operations.
Basic Operations:
	-Insertion
	-Deletion
	-Traversal  (insert middle record)

1.Arrays:
	- Store Same data type
	-Continuous memory allocations
	-Static memory allocations
		-Memory allocated at the time of compilation of a programs.
	-Dynamic memory allocations
		-Memory allocated at the time of execution of the programs.
	-Allowed data type in integer,float,char.
Types of Arrays:
	-One Dimension Arrays
	-Two Dimension Arrays
	-Multi Dimension Arrays
1.One Dimension Arrays
	Example:      int             mark[20]
                                        |                    |        |
                      data type         Variable         memory allocated
                 Example :
		mark[0]=50;
		mark[1]=70;
Example:
/* Maximum marks using Arrays */


#include<stdio.h>
void main()
{
	int mark[5],i,max;
	clrscr();
	p("Enter 5 student Mark\n");
	for(i=0;i<5;i++)
	{
	p("Enter %d student Mark\t",i+1);
	s("%d",&mark[i]);
}
max=mark[0];
for(i=0;i<5;i++)
{
	if(mark[i]>max)
	max=mark[i];
}
p("The Maximum Mark is %d\n",max);
getch();
}

Insertion Arrays:

Example:
	mark[0]=10
	mark[1]=20
	mark[2]=40   ---Insert 30 (Total physical data movements)
Deletion Arrays:
	mark[0]=10
	mark[1]=20
	mark[2]=30
	mark[3]=40   ---Delete 30 (Total physical data movements)
Traversal Arrays:
	Printf a information in begin address.

Example:

/* Array insertion,deletion and Traversal */
#include<stdio.h>
int a[20],n;
void main()
{
	int i,choice;
	void ainsert(),atraversal(),adelete();
	clrscr();
	p("\nEnter the no of elements to be present in the arrays");
	s("%d",&n);
	p("\nEnter the array elements");
		for(i=0;i<n;i++)
		s("%d",&a[i]);
	do
	{
		p("\nArray Operations");
		p("  1.Insertion \n");
		p("  2.Deletion \n");
		p("  3.Traversal \n");
		p("  4.Exit \n");
		p("Enter your choice.....\n);
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:ainsert();
				break;
			case 2:adelete();
				break;
			case 3:atraversal();
				break;
			case 4:exit();

		}
		}while(choice>=1 && choice<=4);
		}
	void ainsert()
	{
		int item,pos,i;
		p("\nEnter the new elements :");
		s("%d",&item);
		p("\nEnter the position in the array where the new elements is to be inserted");
		s("%d",&pos);
		
		if(n>=20)
		{
			p("Array is Full\n");
			return;
		}
		for(i=n-1;i>pos;i--)
		a[i+1]=a[i];
		a[pos]=item;
		n++;
		printf("\nInsertion complated");
		return;
	}		

void adelete()
	{
		int item,i,pos=-1;
		p("\nEnter the item to be deleted :");
		s("%d",&item);
		
		for(i=0;i<n;i++)
		{
		if(a[i]==item)
		pos=i;
		}
		if(pos==-1)
		{
			printf("Item Not Found\n");
			return;
		}
		else
		{
			for(i=pos;i<n;i++)
			a[i]=a[i+1];
			n--;
		}
			printf("\nDeletion complated");
			return;
		}
void atraversal()
	{
		int i;
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		return;
	}
		

Two Diamention Arrays:
	Used in matrics Programs

Example:
	a= 1  2            2 row  2 col        - a[0][1]
	     3  4
	
	b=1 2 2          2 row  3 col       -a[1][0]
                      3 4 5

Example:

int a[3][3],b[3][3],c[3][3];
int row,col;
#include<stdio.h>
void main()

{
	int i,ch;
	void create(),add(),sub(),mul();
	int disp();
	do
	{
		p("1.Creation  \n");
		p("2.Addition  \n");
		p("3.Subtraction  \n");
		p("4.Multification  \n");
		p("5.Exit  \n");
		p("Enter your choice .....\n");
		s("%d",&ch);

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
			p("Enter the No of rows and cols for Matrics");
			s("%d  %d",&row,&col);
			p("Enter Matrics A\n");

			for(i=0;i<row;i++)
				for(j=0;j<col;j++)
				s("%d",&a[i][j]);
			p("Enter Matrics B\n"):
			
			for(i=0;i<row;i++)
				for(j=0;j<col;j++)
				s("%d",&b[i][j]);
			p("Matrics A is\n");
			disp(a);
			return;
		}
			
		void add()
		{
			int i,j;
			p("After Add Operations\n");
			
			for(i=0;i<row;i++)
				for(j=0;j<col;j++)
				c[i][j]=a[i][j]+b[i][j];
				
			p("The Resultant Matrics is\n");
			disp(c);
			return;
		}

		void sub()
		{
			int i,j;
			p("After Sub Operations\n");
			
			for(i=0;i<row;i++)
				for(j=0;j<col;j++)
				c[i][j]=a[i][j]-b[i][j];
				
			p("The Resultant Matrics is\n");
			disp(c);
			return;
		}
		void mul()
		{
			int i,j,k;
			p("After Mul Operations\n");
			
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
				c[i][j]=0;
			for(k=0;k<col;k++)
			
			        c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
	
			p("The Resultant Matrics is\n");
			disp(c);
			return;
		}

		int disp(int mat[3][3])
		{
			int i,j;
			for(i=0;i<row;i++)
			  for(j=0;j<col;j++)
			{
				p("%d\t",mat[i][j]);
			}
			p("\n");
			return;
		getch();
		}


	
		


