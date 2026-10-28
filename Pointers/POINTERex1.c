/*  			Pointer

Definition of Pointer:

	A pointer is a memory variable that stores a memory address.Always
denoted by '*' operators.

Features:
		1.Pointer save the memory space
		2.Execution time with pointer is faster because data is manipulated
		  with the address.Ex.Direct memory access.
		3.The memory is accessed efficiently with the pointers.Dynamically
		  memory is allocated.
		4.Pointers are used with data structure.Ex:Two dimen and Multi diam.

Intialization of Pointer Variable:
	Syntax:
			DataType *ptr_Name;
	Example:
			int *p;
			p=&basic;
	Example:
			int basic,*p,n;
			basic=2000;
			p=&basic;
			n=*p;

Pointer Declarations:
	int *x;
	float *f;
	char *y;
Note:
	1.The '&' is the address operator and represents the address of the variable.
	2.The %u is used with printf() finctions for printing the address of a
	  Variables.
*/
/* Write a program to display the address of the variable */
/*
main()
{
	int num;
	clrscr();
	printf("\nEnter the No :");
	scanf("%d",&num);
	printf("\nValue of Num Variable   :%d",num);
	printf("\nAddress of Num Variable :%u",&num);
	getch();
}
*/

/*Note : Num	=Variable,20=value,4066=Address of variable */

/* Write a prog to disp the address of different variables. */

/*
main()
{
	char c;
	int i;
	float f;
	clrscr();
	printf("\nEnter Alphabets   Numbers   Float :");
	scanf("%c%d%f",&c,&i,&f);
	printf("\nValue of alpha   :%c",c);
	printf("\nValue of Number  :%d",i);
	printf("\nValue of Flaot   :%f",f);

	printf("\nAddress of alpha   :%u",&c);
	printf("\nAddress of Number   :%u",&i);
	printf("\nAddress of Flaot   :%u",&f);
	getch();
}
*/
/* Write a prog to show pointer of any data type that occupies same space */
/*
main()
{
	clrscr();
	printf("Char %d bytes & its pointer %d bytes\n",sizeof(char),sizeof(char*));
	printf("Int %d bytes & its pointer %d bytes\n",sizeof(int),sizeof(int*));
	printf("Float %d bytes & its pointer %d bytes\n",sizeof(float),sizeof(float*));
	getch();
}
*/
/* This programs to demonstrate how to initialize pointer.   */
/*
main()
{
	int a,*p;
	clrscr();
	printf("\nEnter the Numbers :");
	scanf("%d",&a);
	p=&a;
	printf("\n A value is :%d",*p);
	getch();
}
*/

/* Write a prog to disp the value of variable and its location-using pointer */
/*
main()
{
	int a=10,*p;
	clrscr();
	p=&a;
	printf("\nAddress of n  :%u",p);
	printf("\nValue of n    :%d",*p);
	printf("\nAddress of p  :%u",&p);
	getch();
}
*/
/* Write a prog to print value of variable using different pointer notations */
/*
main()
{
	int n=10,*p;
	clrscr();
	p=&n;
	printf("\n n value is :%d\n n value is :%d\n n value is :%d\n",n,*(&n),*p);
	getch();
}
*/
/* Write a prog to add two numbers through variables & their pointers */
/*
main()
{
	int a,b,c,d,*ab,*bp;
	clrscr();
	printf("\nEnter the Two Numbers :");
	scanf("%d%d",&a,&b);
	ab=&a;
	bp=&b;
	c=a+b;
	d=*ab+*bp;
	printf("\n Sum of a and b variable is :%d",c);
	printf("\n Sum of a and b pointer  is :%d",d);
	getch();
}  ************************** THIS PLACE TO  TAKE CONTINUE*********************
*/
/* Write a prog to add a two numbers add,mul,div,sub and Mod through variables
and their pointers */
/*
main()
{
	int a,b,*c,*d;
	clrscr();
	printf("\nEnter the 2 Numbers :");
	scanf("%d%d",&a,&b);
	c=&a;
	d=&b;
	printf("\n a and b is :%d",*c + *d);
	printf("\n a and b is :%d",*c * *d);
	printf("\n a and b is :%d",*c - *d);
	printf("\n a and b is :%d",*c / *d);
	printf("\n a and b is :%d",*c % *d);
	getch();
}
*/
/*Write a prog to assign pointer value to another variable */
/*
main()
{
	int a=5,b,*c;
	c=&a;
	b=*c;
	clrscr();
	printf("\nMemory locations of a :%u",c);
	printf("\nThe value of b 		  :%d",a,b);
	getch();
}
*/
/*Arithmetic Operators with pointers */
/*Write a prog to show the effect of increment and Decrement op */
/*
main()
{
	int i,*ii;
	puts("Enter value of i:");
	scanf("%d",&i);
	ii=&i;
	clrscr();
	printf("\nAddress of i  :%u",ii);
	printf("\nAddress of i  :%u",++ii);
	printf("\nAddress of i  :%u",ii++);
	printf("\nAddress of i  :%u",--ii);
	printf("\nAddress of i  :%u",ii--);
	printf("\nAddress of i  :%u",ii);
	getch();
}
*/

/* Pointer and Arrays
	This programs to demonstrate how to use pointer with arrays
*/
/* Write a prog to disp elements of an array.*/
/*
main()
{
	int x[]={1,2,3,4,5},k=1;
	clrscr();
	while(k<=5)
	{
		printf("%3d",k[x-1]);
		k++;
	}
	getch();
}
/*
/*Write a prog to disp array elements with their address using array name as a
pointer  */
/*
main()
{
	int x[]={1,2,3,4,5},i;
	clrscr();
	printf("\nElements No.Element Address");
	for(i=0;i<=4;i++)
	{
		printf("\nx[%d]=%d",i,*(x+i));
		printf("%8u\n",x+i);

	}
	getch();
}
*/
/*Write a prog to find sum of all the elements of an array.Use array name itself
as a pointers. */
/*
main()
{
	int sum=0,i=0,a[]={1,2,3,4,5};
	clrscr();
	printf("Elements Value   Address\n\n");
	while(i<5)
	{
		printf("a[%d]\t%5d\t%8u\n",i,*(a+i),(a+i));
		sum=sum+*(a+i++);
	}
	printf("\nSum of Array Elements :%d",sum);
	getch();
}
*/
/*Wrire a prog to disp sum of square and cubes of array elements using pointers */
/*
main()
{
	int b[]={1,2,3,4,5},j;
	int sumsq=0,sumc=0;
	clrscr();
	for(j=0;j<5;j++)
	{
		sumsq=sumsq+pow(*(j+b),2);
		sumc=sumc+pow(b[j],3);
	}
	printf("\nSum of Square of array elements :%d",sumsq);
	printf("\nSum of Cube   of array elements :%d",sumc);
	getch();
}
*/
/* Write a prog to disp Two Dimen array elements and their address using pointers. */
/*
main()
{
	int i,j=0,*p;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	clrscr();
	printf("\nElements of an Array with their Address\n\n");
	p=&a[0][0];
	for(i=0;i<9;i++,j++)
	{
		printf("%5d[%5u]",*(p),p);
		p++;
		if(j==3)
		{
			printf("\n");
			j=0;
		}
	}
	getch();
}
*/
/*---------------------------------------------------------------*/
/* Pointers and String
Write a prog to read string from keyboard and disp it using char pointers */
/*
main()
{
	char name[15],*ch;
	printf("\nEnter the Name :");
	gets(name);
	ch=name;
	while(*ch!='\0')
	{
		printf("%c",*ch);
		ch++;
	}
	getch();
}
*/
/* Write a prog Length of strings */
/*
main()
{
	char str[15],*s;
	int p=0,q=0;
	clrscr();
	printf("\nEnter the String :");
	gets(str);
	s=str;
		while(*s!='\0')
		{
			printf("%c",*s);
			p++;
			s++;
			if(*s==32)
				q++;
		}
		printf("\nLength of string including space :%d",p);
		printf("\nLength of string Excluding space :%d",p-q);
		getch();
	}
*/
/* Write a prog to interchange elements of char array using pointer */
/*
main()
{
	char *names[]={"kapil","manoj","Amit","Amol","Pavan","Mahesh"};
	char *tmp;
	clrscr();
	printf("\nOriginal  string   :%s  %s", names[3],names[4]);
	tmp=names[3];
	names[3]=names[4];
	names[4]=tmp;
	printf("\nNew String         :%s   %s",names[3],names[4]);
	getch();
}
*/

/*Write a prog comparation of two string in chah by char */
/*
main()
{
	char str1[20],str2[20],l,*a,*b;
	int c=0;
	clrscr();
	printf("\nEnter the First string :");
	gets(str1);
	printf("\nEnter the Second string :");
	gets(str2);
	a=str1;
	b=str2;
	printf("\nSimilar character Found in Both string ");
	while(*a!='\0')
	{
		if(strcmp(*a,*b)==0)
		{
			printf("\n\t%c\t%c",*a,*b);
			l++;
		}
		else
			c++;
			a++;
			b++;
		}
		if(c==0)
			printf("\nThe string are Identical");
		else
		{
			printf("\nThe string are different at %d place:",c);
			printf("\nThe string char are similar at %d place:",l);
		}
			getch();
		}
*/
/*
 Pointer and Functions
	Write a prog to disp address of user defined functions

	main()
	{
		int show();       /*Function prototype
		clrscr();
		show();     		/*Function call
		printf("%u",show); /*Disp address of function
		getch();
	}
	show()
	{
		printf("\nAddress of functions show() is :");
	}
*/
/*------------------------------------------------------------*/
/*						Pointer and Functions 							  */
/*Write a progr to pass address of struct variable to user defined function
and disp the contents */
/*
struct book
{
	char name[20];
	char author[20];
	int pages;
};
void main()
{
	struct book b1={"C++ Programming ","Bala Gaur",886};
	show(&b1);
	getch();
}
show(struct book *b2)
{
	clrscr();
	printf("\n %sby %s of %d pages",b2->name,b2->author,b2->pages);
}

*/

/*Declare a global template */
/*
struct emp
{
	int sno;
	int pay;
	int hours;
};
main()
{
	static struct emp e={101,8,40};
	int npay,calcnet();

	npay=calcnet(&e);
	printf("\nThe Net pay for emp %d is  %d",e.sno,npay);
	getch();
}
int calcnet(pt)
struct emp *pt;
{
	return(pt->pay*pt->hours);
}
*/


/* Write a prg to disp the address of library functions */
/*
main()
{
	void (*p) ();
	p=clrscr();
	(*p)();
	printf("\nAddress of printf() is :%u",printf);
	printf("\nAddress of scanf() is  :%u",scanf);
	printf("\nAddress of Clrscr() is :%u",clrscr);
	getch();
}
*/
/* Pointer to Structure
	Example:
			struct book
			{
				char name[25];
				char author[20];
				int pages;
			};
			struct book *ptr;

			ptr->name  ptr->author ptr->pages
*/
/* Write a prg to declare pointer to structure and disp the contents of the struc */
/*
main()
{
	struct book
	{
		char name[20];
		char author[20];
		int pages;
	};
	struct book b1={"Java programming","Bala Guru",886};
	struct book *ptr;
	ptr=&b1;
	clrscr();
	printf("\n %s by %s of %d pages",b1.name,b1.author,b1.pages);
	printf("\n %s by %s of %d pages",ptr->name,ptr->author,ptr->pages);
	getch();
}
*/
/*Write a prog to declare pointer as member of structure and disp the contents
of the structure  */
/*
main()
{
	struct boy
	{
		char *name;
		int *age;
		float *height;
	};
	static struct boy *sp;
	char nm[10]="Mohan";
	int ag=20;
	float ht=5.40;

	sp->name=nm;
	sp->age=&ag;
	sp->height=&ht;

	clrscr();
	printf("\nName            :%s",sp->name);
	printf("\nAge             :%d",*sp->age);
	printf("\nHeight          :%f",*sp->height);
	getch();
}
/* Write a prog to declare pointer as members of struct and disp contents of
 the structure without using ->(arrow) operators.  */
/*
main()
{
	struct boy
	{
		char *name;
		int *age;
		float *height;
	};
	struct boy b;
	char nm[10]="Samy";
	int ag=20;
	float ht=5.40;

	strcpy(b.name,nm);
	b.age=&ag;
	b.height=&ht;

	clrscr();
	printf("\n Name        :%s",b.name);
	printf("\n Age         :%d",*b.age);
	printf("\n Height      :%f",*b.height);
	getch();
}
*/
/*Write a prg to disp the contents of the struct using ordinary pointers */
/*
main()
{
	int *p;
	struct num
	{
		int a;
		int b;
		int c;
	};
	struct num d;
	d.a=2;
	d.b=3;
	d.b=4;

	p=&d.a;
	clrscr();
	printf("\nA Value is  :%d",*p);
	printf("\nB Value is  :%d",*(++p));
	printf("\nC Value is  :%d",*(p++));
	getch();
}
*/
/*------------------------------------------------------------*/
/* 					Linked List					*/
/*
	A classic data-handling problems is making additions or deletetins to
existiing records that are maintained in a  specific order.

	Insertion or deletion or records can be accomplised using an array of
structures.

	1.Array are fixed and prespecified in size.
	2.Array structure new elements counld be added to the bottom of the existing
	  array and the array than resorted to restore the proper order of the records.

	A  Linked list provide a convenient method for maintaining a constantly
	changing list,without the need to continually records and restructure the
	complete list.

	Example:
		struct test
		{
			int sno;
			int *pay;
		}
*/
/* Example of pointer and structure variables */
/*
struct emp
{
	int sno;
	int *pt_pay;
}
main()
{
	struct emp e;
	int pay=2000;
	clrscr();
	e.sno=101;
	e.pt_pay=&pay;

	printf("\nEmployee Numbers %d was paid %d",e.sno,*e.pt_pay);
	getch();
}
*/
/* To Create a linked list of struct suitable for storing the name and age
	and telephone numbers  */
/*
	struct tele
	{
		char name[30];
		char phoneno[7];
		struct tele *nextaddr;
	}
	main()
	{
		static struct tele t1={"Ganesan","2535299"};
		static struct tele t2={"Balan", "2535230"};
		static struct tele t3={"Rajendran","2535231"};

		struct tele *first;	/*Create a pointer to a struc
		clrscr();

		first=&t1;           /* store t1's address in first
		t1.nextaddr=&t2;     /* store t2's address in t1.nextaddr
		t2.nextaddr=&t3;     /* store t3's address in t2.nextaddr
		t3.nextaddr='\0';    /* store the null address in t3.nextaddr

		printf("\n %s %s",first->name,t1.nextaddr->name,t2.nextaddr->name);
		getch();
	}
*/

/* To Create a linked list of struct suitable for storing the name and age
	and telephone numbers display a all fields  */
/*
	struct tele
	{
		char name[30];
		char phoneno[7];
		struct tele *nextaddr;
	};
	main()
	{
		static struct tele t1={"Ganesan","2535299"};
		static struct tele t2={"Balan", "2535230"};
		static struct tele t3={"Rajendran","2535231"};

		struct tele *first;	/*Create a pointer to a struc
		clrscr();

		first=&t1;
		t1.nextaddr=&t2;
		t2.nextaddr=&t3;
		t3.nextaddr='\0';
		display(first); /* Send the address of the first structure
		getch();
	}
	display(contents)		/* Display till end of of linked list
	struct tele *contents;	/* a pointer to a structure
	{
		while(contents !='\0')
		{
			printf("\n %30s %20s",contents->name,contents->phoneno);
			contents=contents->nextaddr;	/* get next addess
		}
		return;
	 }
*/

/*-------------------------------------------------------------*/
/*	      Dynamic Storage Allocations      */

/*	Once specific memory locations have been reserved for a  variables,these
        locations are fixed,whether they are used or not.

	The dynamic allocations of memory is extermely useful when dealing with
	lists of structures,Because it allows the list to expand as new records are
	added and contract as records are deleted.

	1.malloc()	-This function reserves the no of bytes requested by the 				 arguments passed to the functions.
	Syntax:
		malloc(sizeof(int))

	2.free()	-Release a block of bytes previously reserved.

	Example:
		struct tele
		{
			char name[20];
			char phoneno[15];
		}
		malloc(sizeof(struct tele));
*/
/*Example:
struct tele
{
	char name[20];
	long phoneno[10];
};
main()
{
	char key;
	char *malloc();
	struct tele *recpoint;	/* recpoint is a pointer to a.struct of type tele
	clrscr();
	printf("\nDo you wish to create a new record (Respond with y or n):");
	key=getchar();
	if(key=='y')
	{
		key=getchar();	/* get the enter key for buffered input
		recpoint=(struct tele*)malloc(sizeof(struct tele));
		populate(recpoint);
		dispone(recpoint);
	}
	else
		printf("\nNo Record has been created");
	}

	populate(record)		/*get a name and pnoneno

	struct tele *record;	/* a pointer to a struct of type tel
	{
		printf("\nEnter a Name :");
		gets(record->name);
		printf("\nEnter the phoneNo :");
		gets(record->phoneno);
		return;
	}

	dispone(contents)	/* disp the contents of one record

	struct tele *contents;	/* a pointer to a struct of type tele
	{
		printf("\nThe contents of the Record just created is :");
		printf("\nName   :%s",contents->name);
		printf("\nPhoneNo:%d",contents->phoneno);
		return;
	}
*/
/* Example   2   */

/*
struct tele
{
	char name[20];
	long phoneno[10];
	struct tele *nextaddr;
};
main()
{
	int i;
	struct tele *list,*current;	/* two pointers to struct of type tele
	char *malloc();		/* malloc() returns a pointer to a char

	/* get a pointer to the first struct in the list
	list=(struct tele *)malloc(sizeof(struct tele));
	current=list;

	/* populate the current struct and create two more struct
	for(i=0;i<2;++i)
		{
			populate(current);
			current->nextaddr=(struct tele *)malloc(sizeof(struct tele));
			current=current->nextaddr;
		}
	populate(current);		/* populate the last stru
	current->nextaddr='\0';	/* set the last address
	printf("The list consists of the following records :\n");
	display(list);		/* disp the struct */
	return;
	}

	populate(record)	/* get a name and phone no
	struct tele *record;	// a pointer to a struct of type tele
	{
		printf("\nEnter a Name :");
		gets(record->name);
		printf("\nEnter the phoneNo :");
		gets(record->phoneno);
		return;
	}

	display(contents)	/* disp till end of linked list

	struct tele *contents;	/* a pointer to a struct of type tele
	{
		while(contents !='\0')
		{
			printf("\n%-30s %-20s",contents->name,contents->phoneno);
			contents=contents->nextaddr;
		}
		return;
		getch();
	}
*/

