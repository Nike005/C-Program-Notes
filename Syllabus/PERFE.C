//program to find perfect or not:
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=0;
clrscr();
printf("Enter a value\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
c=c+1;
}
if(c==n)
printf("%d is perfect",n);
else
printf("%d is not perfect",n);
getch();
}