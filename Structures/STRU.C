/*Rules for declaring a structure:
1. A structure must end with a semicolon.
2. Usually a structure appears at the top of the source program.
3. Each structure element must be terminated.
4. The structure variable must be accessed with structure variable with
   dot (.) operator.

Difference between Structure and Array:
	Array			Structure
1. An array is a collection    1. A structure is a collection of
   of similar data items.         dissimilar items.
2. An array is derived data    2. It is a User defined and type.
   type.
3. It behaves like a built     3. It must be declared and defined.
   in data types.
4. An array can be increased   4. A Structure element can be added if necessary.
   and decreased.

*/

//	Structure Assignment:
/*	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 struct
	 {
	  int a;
	  int b;
	 }x,y;
	 x.a=30;
	 y=x;
	 clrscr();
	 printf("%d",y.a);
	 getch();
	}*/







/*   Union
   ~~~~~
   Union is a derived data type and it is declared like structure.
The difference between union and structure is in terms of storage.
In structure each member has its own storage location. whereas all the
members of union use the same location, although a union may contain many
members of different types. When we use union the compiler allocates a piece
of storage that is large enough to hold. Like structures, union is also declared
by using the keyword union.
*/

//  	Ex:1
/*	#include<stdio.h>
	#include<conio.h>
	union name
	{
	 int a;
	 char b[2];
	};
	void main()
	{
	 union name c;
	 c.a=256;
	 clrscr();
	 printf("c.a value is %d\n",c.a);
	 printf("c.b[0] value is %d\n ",c.b[0]);
	 printf("c.b[1] value is %d",c.b[1]);
	 getch();
	}*/

//	Ex:2
/*
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 union result
	 {
	  int marks;
	  char grade;
	 };
	 struct res
	 {
	  char name[15];
	  int age;
	  char sex;
	  char address;
	  int pin;
	  union result perf;
	 };
	 struct res data;
	 clrscr();
	 printf("Size of Union :%d\n",sizeof(data.perf));
	 printf("Size of Structure :%d\n",sizeof(data));
	 getch();
	}  */
//Array of Structure:
	#include<stdio.h>
	#include<conio.h>
	struct book
	{
	 char name[10];
	 int price;
	 int pages;
	};
	struct book b[3];
	void main()
	{
	 int i;
	 clrscr();
	 for(i=0;i<=3;i++)
	 {
	  printf("Enter book name,price,pages:");
	  scanf("%s%d%d",b[i].name,&b[i].price,&b[i].pages);
	 }
	 for(i=0;i<=3;i++)
	 printf("\n %s\t%d\t%d",b[i].name,b[i].price,b[i].pages);
	 getch();
	}