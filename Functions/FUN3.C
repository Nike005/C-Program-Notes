/*3. Functions with arguments and no return values:
	If a calling function passes some argument to the calling function
but it does not return any value to the calling function. Then it is called as
functions with arguments and no return values.

Example:      */

#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int a,b;
clrscr();
printf("Enter a,b values"); // 5 6
scanf("%d%d",&a,&b);
add(a,b);                        // add(5,6);
getch();
}
void add(int x,int y)
{
printf("sum is %d",x+y);
}





