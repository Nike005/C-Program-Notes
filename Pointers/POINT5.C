/*Pointers and Array:
------------------
	Normally we store the address of the variable by using & symbol
where as in arrays we need not use & operator to retrive the address of the
variable. This is the close relationship between pointers and arrays.

Ex:*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={1,2,3,4,5},*p,i=0,sum=0;
clrscr();
p=a;
while(i<5)
{
 sum=sum+*p;
 i++;
 p++;
}
printf("Sum is %d",sum);
getch();
}