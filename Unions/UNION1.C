/*Union:
	It is just like a structure which was borrowed from structures.
In structures all the member variables will have its own location where
as in union all will take same memory location . It takes the highest datatype
value for all the variables. */
#include<stdio.h>
#include<conio.h>
union emp
{
 char initial;
 float bpay;
};
void main()
{
 union emp s;
 s.initial='a';
 s.bpay=2000.00;
 clrscr();
 printf ("initial is %c",s.initial);
 printf ("\nbpay is %f",s.bpay);
 getch();
}



