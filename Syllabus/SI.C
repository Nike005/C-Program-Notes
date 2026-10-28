//Program to find SI :
#include<stdio.h>
#include<conio.h>
void main()
{
int p,n;
float  r,si;
clrscr();
printf("Enter the principle amount\n");
scanf("%d",&p);
printf("Enter the year\n");
scanf("%d",&n);
printf("Enter the interest \n");
scanf("%f",&r);
si=p*n*r/100;
printf("The simple interest is %.2f",si);
getch();
}