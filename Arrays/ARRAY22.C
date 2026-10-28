//Matrix Addition:
//~~~~~~~~~~~~~~~
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][2],b[2][2],i,j;
 clrscr();
 printf("Enter the A matrix elements:");
 for(i=1;i<=2;i++)
 {
  for(j=1;j<=2;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter the b matrix elements:");
 for(i=1;i<=2;i++)
 {
  for(j=1;j<=2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("The addition matrix is:\n\n");
 for(i=1;i<=2;i++)
 {
  for(j=1;j<=2;j++)
  {
   printf("%d\t",a[i][j]+b[i][j]);
  }
  printf("\n");
 }
 getch();
}

/*Multi dimensional Array:
	If the array has more than 2 dimensions it is known as
"Multi dimensional Array".

Syntax:
	data_type array_name [s1][s2][s3][s4]....;

Ex:
	int a[2][2][2][2];
*/










