#include<stdio.h>
#include<conio.h>
void main()
{
int c,i;
FILE *fp1,*fp2,*fp3;
clrscr();
fp1=fopen("Input.c","w");
printf("Input file\n");
for(i=0;i<10;i++)
{
scanf("%d",&c);
putw(c,fp1);
}
fclose(fp1);
fp1=fopen("input.c","r");
fp2=fopen("odd.c","w");
fp3=fopen("even.c","w");
while((c=getw(fp1))!=EOF)
{
if(c%2==0)
putw(c,fp3);
else
putw(c,fp2);
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
fp2=fopen("odd.c","r");
fp3=fopen("even.c","r");
printf("Odd numbers are \n");
while((c=getw(fp2))!=EOF)
printf("%4d",c);
printf("Even numbers are\n");
while((c=getw(fp3))!=EOF)
printf("%4d",c);
getch();
}