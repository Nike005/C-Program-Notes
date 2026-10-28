//Program to find the Armstrong number:
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,s=0,x;
clrscr();
printf("Enter a value \n");
scanf("%d",&n);
x=n;
while(n>0)
{
a=n%10;
s=s+a*a*a;
n=n/10;
}
if(x==s)
printf("%d is armstrong number",x);
else
printf("%d is not a armstrong number",x);
getch();
}
