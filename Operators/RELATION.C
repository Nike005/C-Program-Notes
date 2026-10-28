//Relational operator:
/* >  - is greater than
   >= - is greater than or equal to
   == - is equal to
   != - is not equal to
   <  - is less than
   <= - is less than or equal to
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int x=10,y=11;
 clrscr();
 printf(" x is greater than y %d\n",x>y); //0
 printf(" x is lesser than y %d\n",x<y);  //1
 printf(" y is greater than x %d\n",y>x); //1
 printf(" x is not equal to y %d\n",x!=y); //1
 printf(" x is equal to y %d\n",x==y);    //0
 getch();
}