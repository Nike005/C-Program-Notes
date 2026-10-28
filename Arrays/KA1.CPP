#include<stdio.h>
#include<conio.h>
void main()
{
int num[5];
int great,i;
clrscr();
printf("Enter Any ten Number:\n");
{
  for(i=0;i<5;i++)
  {
  scanf("%d",&num[i]);
  }
  great=num[0];
  for(i=0;i<5;i++)
  {
	if(great<num[i])
	great=num[i];
  }
  printf("The greatest number is %d",great);
}
getch();
}
