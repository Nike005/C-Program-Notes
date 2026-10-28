/*Declaration of one dimensional array:

	Syntax:
		data_type array_name[size];
	Eg:
		int a[5];
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i;
 clrscr();
 printf("Enter the array elements:");
 for(i=1;i<=5;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=1;i<=5;i++)
 {
 printf("The no u entered is: %d\n",a[i]);
 }
 getch();
}
