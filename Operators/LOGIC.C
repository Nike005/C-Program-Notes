//Logical Operator:(&&(and) , ||(or) , !(not))
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter a,b,c values:");
 scanf("%d%d",&a,&b);
 printf("the and operator is:%d",(a&&b));
 printf("\nthe or operator is: %d",a||b);
 printf("\nthe not operator is: %d",!a);

  getch();
}
