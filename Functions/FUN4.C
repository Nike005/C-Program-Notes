/*4. Functions with arguments and return type:

Example:  */

#include<stdio.h>
#include<conio.h>
int sindhu(int,int);
void main()
{
int a,b;
clrscr();
printf("Enter a,b values");
scanf("%d%d",&a,&b);  // 5,2
printf("The sum is %d",sindhu(a,b));
getch();
}
int sindhu(int x,int y)
{
return(x+y);
}





