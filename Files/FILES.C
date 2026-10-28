#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char c;
clrscr();
printf("enter the input data/n");
fp=fopen("input.c","w");
while((c=getchar())!=EOF)
putc(c,fp);
fclose(fp);
printf("the output data is\n");
fp=fopen("input.c","r");
while((c=getc(fp))!=EOF)
printf("%c",c);
fclose(fp);
getch();
}