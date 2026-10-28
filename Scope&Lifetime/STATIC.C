/*3. Static variables:
	It is just like  a global variables, but it retains the old value
whenever a function calls.We need not initialize a static variables.It is set
to zero default.*/

#include<stdio.h>
#include<conio.h>
void print(void);
void main()
{
int i;
clrscr();
for(i=0;i<5;i++)
print();
getch();
}
void print()
{
static int x;
x=x+1;
printf("x is %d\n",x);
}