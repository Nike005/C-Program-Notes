/*2)External variables:
	It is just like a global variables. We can access the variables
 anywhere in the program.

 Ex: */
 #include<stdio.h>
 #include<conio.h>
 void fun1(void);
 int x=10;
 void main()
 {
 clrscr();
 fun1();
 x=x+10;
 printf("Now x is %d",x);
 getch();
 }
 void fun1(void)
 {
 x=x+30;
 printf("X is %d\n",x);
 }

