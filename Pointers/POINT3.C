//Arithmetic operations on Pointers:
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p1,*p2,*p3,c;
clrscr();
printf("Enter the a,b values");
scanf("%d%d",&a,&b);
p1=&a;
p2=&b;
c=*p1+*p2;
p3=&c;
printf("%d is stored in %u\n",a,p1);
printf("%d is stored in %u\n",b,p2);
printf("The addition is %d\n",c);
printf("%d is stored in %u",c,p3);
getch();
}
