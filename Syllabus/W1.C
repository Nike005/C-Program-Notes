#include<stdio.h>
#include<conio.h>
/*void main()
{
 int i=1;
 clrscr();
 while(i<=32767)
 {
  printf("%d\n",i);
  i=i+10;
 }
 getch();
} */
/*void main()
{
 int x=4,y=3,z;
 clrscr();
 z=x-- -y;
 printf("\n %d%d%d",x,y,z);
 getch();
}
  */
/*  void main()
  {
   int i;
   clrscr();
   for(i=0;i<10;i++)
   {
   printf("\nHello\n");
   }
   getch();
  } */

/*  void main()
  {
   int i,j,n;
   clrscr();
   printf("enter the n val");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
    for(j=0;j<=i;j++)
    {
     printf("%d  ",i);
    }
    printf("\n");
   }
   getch();
  }*/

  void main()
  {
   int i,j,k,n;
   clrscr();
   printf("Enter the n val");
   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
   {
    for(j=0;j<=i;j++)
    {
     for (k=1;k>=n;k--)
     {
      printf("  %d  ",j);
    }
    printf("\n");
   }
  }
   getch();
  }