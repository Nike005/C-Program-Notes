/*Two dimensional array:
declaration of two dimensional array:
	data_type array name[row size][col size];
Eg:
	int a[5][5];
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][2],b[2][2],i,j;
 clrscr();
 printf("Enter the a matrix elements:");
 for(i=1;i<=2;i++)
  {
   for(j=1;j<=2;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  printf("Enter the B matrix elements:");
  for(i=1;i<=2;i++)
  {
   for(j=1;j<=2;j++)
   {
    scanf("%d",&b[i][j]);
   }
  }
  printf("The addition matrix is :\n");
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
