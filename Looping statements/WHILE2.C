/*While Statement:
Syntax:
	while(test condition)
	{
	statements;
	}   */
#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,n;
clrscr();
printf("Enter the range:");
scanf("%d",&n);
while(i<=n)
{
printf("%d\n",i);
i++;
}
getch();
}