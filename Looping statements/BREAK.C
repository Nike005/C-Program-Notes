/*Break statement:
	The break statement is used to terminate a loop. When the keyword
break is used inside any C loop, control automatically transferred to the first
statement after the loop.

Syntax:
	break;
*/

/*	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int i;
	 clrscr();
	 for(i=1;i<=10;i++)
	 {
	  if(i==6)
	  break;
	  printf("%d\n",i);
	 }
	 getch();
	}*/

/* Continue statement:
	If we want to take the control to the beginning of the loop,
bypassing the statements inside the loop which have not yet been executed,
for this purpose the continue is used.

Syntax:
	continue;

Note:
    The break; and continue statements also associate with if statement.

    */

    //Program to find the sum of the given positive numbers:
/*    #include<stdio.h>
    #include<conio.h>
    void main()
    {
     int i,n,sum=0;
     clrscr();
     for(i=1;i<=5;i++)
     {
      printf("Enter any number.....");
      scanf("%d",&n);
      if(n<0)
       continue;
      else
      sum=sum+n;
     }
     printf("Sum is ....%d",sum);
     getch();
    }  */

//Goto Statement:

#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter the nos:");
 scanf("%d%d",&a,&b);
 if(a==b)
  goto equal;
  else
  {
   printf("\nA and B are not equal");
   exit(0);
  }
  equal:
  printf("A and B are equal");
  getch();
 }
