/*Union:
	It is just like a structure which was borrowed from structures.
In structures all the member variables will have its own location where
as in union all will take same memory location . It takes the highest datatype
value for all the variables.
Ex:*/

#include<stdio.h>
#include<conio.h>
union emp
{
char name;
int rollno;
float bpay;
};
void main()
{
union emp a={'r',100,5000};
clrscr();
printf("Initial is %c",a.name);
printf("Roll no is %d",a.rollno);
printf("Bpay is   %f",a.bpay);
getch();
}