//Program to find prime or not:
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=0;
clrscr();
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
c=c+1;
}
if(c==2)
printf("%d is prime",n);
else
printf("%d is not prime",n);
getch();
}
