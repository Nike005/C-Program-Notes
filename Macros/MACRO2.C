#include<stdio.h>
#include<conio.h>
#define x clrscr()
#define y getch()
#define and &&
#define larger >
void main()
{
int a,b,c;
x;
printf("Enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
if((a larger b)and(a larger c))
printf("a is larger");
else
if((b larger a ) and (b larger c))
printf("B is larger");
else
printf("c is larger");
y;
}
