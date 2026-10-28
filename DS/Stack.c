------------------------------------------------------------------------------------------------------------------------	
		Introduction of Stack Data structure
------------------------------------------------------------------------------------------------------------------------
	Same way of inSert and delete of stack items

Example: LIFO(Last in First out Methods) and FILO (First in Last Out Methods)

-Insert(Push)		-Overflow (Can't insert item)
-Delete (pop)		-Underflow error (empty stack)
-view(peep)		-Top of the view item(i)
-change( )			-Top of change item

Example:

/* stack Operation */
#include<stdio.h>
#include<conio.h>
#define N 10
int top=-1;
int stack[N];
void disp();
void main()
{
	int ch;
	void push();
	void pop();
	void peep();
	void change();
	do
	{
		clrscr();
		printf("Stack Operation\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peep\n");
		printf("4.Change\n");
		printf("5.Exit\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				change();
				break;
			case 5:
				exit();
		}
		}while(ch>=1 && ch<=5);
		getch();
		}
		void push()
		{
			int item;
			printf("Push Operation\n\n");
			if(top>=N-1)
			{
				printf("Overflow Error-push not done\n");
				getch();
				return;
			}
			else
			{
				printf("Enter the element to be pushed:");
				scanf("%d",&item);
				top=top+1;
				stack[top]=item;
			}
			printf("Push Operation Completed\n\n");
			printf("Stack Alter Push Operation\n\n");
			disp();
			getch();
			return;
			}
			void pop()
			{
				int item;
				printf("Pop Operation\n\n");
				if(top<=-1)
				{
					printf("UnderFlow Error-pop not done\n\n");
					getch();
					return;
				}
				else
				{
					item=stack[top];
					top=top-1;
					printf("Popped element is %d\n",item);
				}
				printf("Pop Operation Complated\n\n");
				printf("Stack after pop operation\n\n");
				disp();
				getch();
				return;
			}
			void peep()
			{
				int i,item;
				printf("Peep Operation\n");
				printf("Enter position to peep(value should be greater 				than zero):");
				scanf("%d",&i);
				if((top-i+1)<=0)
				{
					printf("\nvalied i value -peep not done\n\n");
					getch();
					return;
				}
				else
				{
					item=stack[top-i+1];
					printf("Peeped elements is %d\n",item);
				}
				printf("Peep Operation Complated\n\n");
				printf("Stack After peep Operation\n\n");
				disp();
				getch();
				return;
			}
			void change()
			{
				int i,item;
				printf("Change Operation\n\n");
				printf("Enter Position to change (value should be greater than 				zero):");
				scanf("%d",&i);
				printf("Enter New Elements");
				scanf("%d",&item);
				if(top-i+1<0)
				{
					printf("\nValied i value-change not Done\n\n");
					getch();
					return;
				}
				else
				{
					stack[top-i+1]=item;
					printf("Change Operation Complated\n\n");
					printf("Stack after change Operation\n\n");
					disp();
					getch();
					return;
				}
				}
			void disp()
			{
				int i;
				if(top<=-1)
				{
					printf("Empty Stack\n\n");
					getch();
					return;
				}
				for(i=top;i>=0;i--)
					printf("%d\n\n",stack[i]);
					return;
			}


-------------------------------------------------------
Example: 2

/* Reverse the given sentence using stack */
#include<stdio.h>
#include<conio.h>
#define N 10
int top =-1;
char stack[N];
void main()
{
	char str[N],rstr[N],ch;
	int i=0;
	void push(char);
	char pop();
	clrscr();
	printf("Enter the Name :\n");
	gets(str);
	while((ch=str[i])!='\0')
	{
		push(ch);
		i++;
	}
	printf("The Reverse Name is \n");
	i=0;
	while(top>=0)
	{
		rstr[i]=pop();
		i++;
	}
	rstr[i]='\0';
		printf("%s\n",rstr);
		getch();
	}
	void push(char ch)
	{
		if(top>=N-1)
		{
			printf("Overflow Occured\n");
			return;
		}
		else
		{
			top++;
			stack[top]=ch;
		}
		return;
		}
		char pop()
		{
			if(top<=-1)
			{
				printf("UnderFlow Occured\n");
				return;
			}
			else
				return(stack[top--]);
			}