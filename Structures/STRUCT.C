/* Introduction of Structur
		Array			-Collection of same data types called as Array.
		Structure		-Collection of Different Data Types Called as Structure.

Syntax:
	struct <TagName>
	{
		DataType Member 1;
		DataType Member 2;
	}

  Example:
	struct emp
	{
		int sno;
		char ename[20];
	}

Declaration of Structure Variable:

Syntax:
		struct <Struct Tag> <VariableName>;

Example:

	struct emp
	{
		int sno;
		char ename[20];
	};
	struct emp e1,e2,e3;

	or

	struct emp
	{
		int sno;
		char ename[20];
	}
	e1,e2,e3;

Assigning the  Struct Elements or Members:

Syntax:
		VariableName.MemberVariable;
Example:
		e1.sno;
		e2.ename;

Initialization How structure Elements are Stored:

Example:
	e1.sno=5000;
	strcpy(e1.ename,"Kumar");

Get a User Value :

scanf("%d",e1.sno);
printf("Serial Number is :%d",e1.sno);
--------------------------------------------------------
/*1.Initial value of Structure Variable */
/*
void main()
{
	struct book1
	{
		char book[30];
		int pages;
		float price;
	};
	struct book1 bk={"C programming",300,285.50};
	clrscr();
	printf("\nBook Name          :%s",bk.book);
	printf("\nPages          	  :%d",bk.pages);
	printf("\nPrice              :%f",bk.price);
	getch();
}
/* struct book1 bk1={"Vb",400,560};
	printf("\nBook Name          :%s",bk1.book);
*/
/*
2.Reading and Writing the using data structure:
*/
/*
main()
{
	struct emp
	{
		int sno;
		char ename[20];
		int basic;
	};
	struct emp e1;
	clrscr();
	printf("\nEnter the  sno   Ename  Basic  :");
	scanf("%d %s %d",&e1.sno,e1.ename,&e1.basic);
	printf("\nSerail Number         is :%d",e1.sno);
	printf("\nEmp Name				  is :%s",e1.ename);
	printf("\nBasic Pay             is :%d",e1.basic);
	getch();
}
*/
/* 3.Using Another Mothed of Data Structure */
/*
main()
{
	struct emp
	{
		int sno;
		char ename[20];
		int basic;
	}
	e1;
	clrscr();
	printf("\nEnter the  sno   Ename  Basic  :");
	scanf("%d %s %d",&e1.sno,e1.ename,&e1.basic);

	printf("\nSerail Number         is :%d",e1.sno);
	printf("\nEmp Name				is :%s",e1.ename);
	printf("\nBasic Pay             is :%d",e1.basic);
	getch();
}
*/
/* 4.Copy of a Data Structure   */

/*
main()
{
	struct disk
	{
		char co[15];
		float type;
		int price;
	};
	struct disk d1={"Sony",1.44,20};
	struct disk d2,d3;
	strcpy(d2.co,d1.co);
	d2.type=d1.type;
	d2.price=d1.price;

	d3=d2;
	clrscr();
	printf("\n%s   %.2f   %d",d1.co,d1.type,d1.price);
	printf("\n%s   %.2f   %d",d2.co,d2.type,d2.price);
	printf("\n%s   %.2f   %d",d3.co,d3.type,d3.price);
	getch();
}
*/
/* Array with in Data Structure */
/*
main()
{
	struct emp
	{
		int eno;
		char ename[20];
		int basic;
	};
	struct emp e[3];
	int i;
	for(i=0;i<=2;i++)
	{
		printf("\nEnter Eno    Ename    Basic Pay :");
		scanf("%d  %s  %d",&e[i].eno,e[i].ename,&e[i].basic);
	}
	for(i=0;i<=2;i++)
	{
		printf("Employee No    :%d\n",e[i].eno);
		printf("Employee Name  :%s\n",e[i].ename);
		printf("Employee Basic :%d\n",e[i].basic);
	}
		getch();
	}
*/
/* Structure with Expression   */
/*
main()
{
	struct emp
	{
		int eno;
		char ename[20];
		int basic,all,ded,npay;
	};
	struct emp e1;
	clrscr();
	printf("\nEnter eno  ename  Basic Pay :");
	scanf("%d %s  %d",&e1.eno,e1.ename,&e1.basic);
	e1.all=e1.basic*12/100;
	e1.ded=e1.basic*8/100;
	e1.npay=e1.basic+e1.all-e1.ded;
	printf("\nEmployee No     		:%d",e1.eno);
	printf("\nEmployee Name     	:%s",e1.ename);
	printf("\nEmployee allowance  :%d",e1.all);
	printf("\nEmployee Deduction  :%d",e1.ded);
	printf("\nEmployee Net Pay    :%d",e1.npay);
	getch();
}
*/
/* Data Structure and Functions */
/*
main()
{
	struct book
	{
		char name[20];
		char author[20];
		int pages;
	};
		struct book b1={"C Programming","Bala Gurusamy",886};
		show(b1.name,b1.author,b1.pages);
	}
	show(char *s,char *a,int n)
	{
		clrscr();
		printf("\n%s  by  %s of %d pages",s,a,n);
		getch();
	}
/* Another Methods  */
/*
struct book
{
	char name[20];
	char author[20];
	int callno;
};
main()
{
	struct book b1={"C programming","Bala Gurusamy",101};
	clrscr();
	display(b1);
	getch();
}
display(struct book b)
{
	printf("\n%s   %s  %d",b.name,b.author,b.callno);
}
*/
/*  Structure in Structure   */
/*
main()
{
	struct address
	{
		char phone[15];
		char city[25];
		int pin;
	};
	struct emp
	{
		char name[25];
		struct address a;
	};
	struct emp e={"Ram","223344","Erode",638001};
	clrscr();
	printf("\nName			:%s",e.name);
	printf("\nPhone			:%s",e.a.phone);
	printf("\nCity			:%s",e.a.city);
	printf("\nPincode		:%d",e.a.pin);
getch();
}
*/
/*-----------------------------------------------------------------*/
/*
			Union

Union			-Same to the Structure

Note  :
Struct		-Each elements Indual Memory size
Union			-All Elements Indual Memory Size.

Example:
		union emp
		{
			int sno;
			char name[20];
		};
		union emp e1;

Example programs:
*/
/*
main()
{
	union emp
	{
		int sno;
		char name[20];
		int salary;
	};
	union emp e;
	clrscr();
	printf("\nEnter the  sno   Name    Salary :");
	scanf("%d %s %d",&e.sno,e.name,&e.salary);
	printf("\nSerial Number    :%d",e.sno);
	printf("\nName		         :%s",e.name);
	printf("\nSalary           :%d",e.salary);
	getch();
}
*/
/*--------------------------------------------------------------*/
/* 				Typedef

	By using typedef we can create new data type.

	Syntax:
		typedef type dataType;
	Example:
		typedef int hours;
*/
/*  Example:  1*/
/*
#define h 60
main()
{
	typedef int hours;
	hours hrs;
	clrscr();
	printf("\nEnter the Hours :");
	scanf("%d",&hrs);
	printf("\nMinute         :%d",hrs*h);
	printf("\nSecond         :%d",hrs*h*h);
	getch();
}
*/

/* Example  :2  */
/*
main()
{
	typedef char string[20];
	string a="Hello",b;
	clrscr();
	puts("Enter Your Name :");
	gets(b);
	printf("\n%s    %s ",a,b);
	getch();
}
*/
/* Example :3  */
/*
main()
{
	typedef struct
	{
		char name[20];
		char sex[2];
		int accno;
	}info;
	info employee={"Kumar","M",125};
	clrscr();
	printf("\nName\t Sex\tAccounts No\n");
	printf("%s\t",employee.name);
	printf("%s\t",employee.sex);
	printf("%d\t",employee.accno);
	getch();
}
*/
/*-----------------------------------------------------------------*/
/*			Enumerated Data Types
	This statement create a user-Defined data Types.
	Syntax:
		enum VariableName{ some Values };
	Example:
		enum month{Jan,Feb................};
		enum month{Jan=1,Feb,Mar..........};
*/
/*Example  :1  */
/*
main()
{
	enum month{Jan,Feb,Mar,Apr,May,June,July,Aug,Sep,Oct,Nov,Dec};
	clrscr();
	printf("\nJan               :%d",Jan);
	printf("\nFeb               :%d",Feb);
	printf("\nMar               :%d",Mar);
	printf("\nApr               :%d",Apr);
	printf("\nMay               :%d",May);
	getch();
}
*/
/*Example  :2  */
/*
main()
{
	enum month{Jan=1,Feb,Mar,Apr,May,June,July,Aug,Sep,Oct,Nov,Dec};
	clrscr();
	printf("\nJan               :%d",Jan);
	printf("\nFeb               :%d",Feb);
	printf("\nMar               :%d",Mar);
	printf("\nApr               :%d",Apr);
	printf("\nMay               :%d",May);
	getch();
}
*/
/* Example  :3 */
/*
main()
{
	int f;
	enum month{Jan=1,Feb,Mar,Apr,May,June,July,Aug,Sep,Oct,Nov,Dec};
	clrscr();
	for(f=Jan;f<=Dec;f++)
	switch(f)
	{
		case Jan:
			printf("\nJanuary");
			break;
		case Feb:
			printf("\nFebrary");
			break;
		case Mar:
			printf("\nMarch");
			break;
	}
	getch();
}
*/
/* Example :4  */
main()
{
	enum capital
	{
		mumbai,Hydrabad,Bangalore
	};
	struct state
	{
		char name[20];
		enum capital c;
	};
	struct state s;
	strcpy(s.name,"Andra Pradesh");
	s.c=Hydrabad;
	clrscr();
	printf("\nState        :%s",s.name);
	printf("\nCapital      :%d",s.c);
	if(s.c=Hydrabad)
		printf("\n Hydrabad is capital of %s",s.name);
	getch();
}




