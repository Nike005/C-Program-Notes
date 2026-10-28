//Program using Exclusive OR:
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of a,b\n");
scanf("%d%d",&a,&b);
c=a^b;
printf("The val is %d",c);
getch();
}