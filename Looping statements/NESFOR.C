//Nesting of for statement:
/* Syntax:
	for(init;condi;inc/dec)
	{
	 for(init;condi;inc/dec)
	 {
	  statements;
	 }
	}
	*/
#include<stdio.h>
#include<conio.h>
/*
void main()
{
 int i,j,n;
 clrscr();
 printf("Enter the n value:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  for(j=0;j<=i;j++)
  {
   printf("%d  ",j);
  }
  printf("\n");
 }
 getch();
}





*/

void main()
{
 int i,j,n;
 clrscr();
 scanf("%d",&n);

   for(i=1;i<=n;i++)
    {
      for(j=i;j>=1;j--)
      {
       printf("%d",i);
       }
       printf("\n");

     }

   getch();
}