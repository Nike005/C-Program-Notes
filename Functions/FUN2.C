/*2. Functions with no argument with return type:
	If a calling function does not pass any arguments to the called
function but it returns some value to the calling function.Then the function
is called as Functions with no argument with return type.
Example:   */

#include<stdio.h>
#include<conio.h>
int add();
void main()
{
clrscr();
printf("addition program\n");
printf("The sum is %d",add());
getch();
}
int add()
{
int a,b;
printf("Enter a,b values\n");
scanf("%d%d",&a,&b);
return(a+b);
}

