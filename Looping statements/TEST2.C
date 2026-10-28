#include<stdio.h>
#include<conio.h>
void main()
{
int p,n,count=1;
float r,si;
clrscr();
//count=1;
while(count<=3)
{
printf("enter ta values of p,q,r:");
scanf("%d%d%f",&p,&n,&r);
si=p*n*r/100;
printf("\simple interest=rs. %f",si);
count=count+1;
}
getch();
}
