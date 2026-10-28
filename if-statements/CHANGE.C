//Swapping of numbers:
#include<stdio.h>
#include<conio.h>
void main()
{
 int m,n,a;
 clrscr();
 printf("Enter two numbers");
 scanf("%d %d",&m,&n);
 if(m>n)
 {
  a=m;
  m=n;
  n=a;
 }
 printf("The interchange value is%d%d",m,n);
 getch();
}
