#include<stdio.h>
#include<conio.h>
void main()
{
char c;
FILE *fp;
clrscr();
fp=fopen("f1.c","w");
printf("Input file\n");
while((c=getchar())!=EOF)    //EOF - End Of File
putc(c,fp);
fclose(fp);

fp=fopen("f1.c","r");
printf("Output file\n");
while((c=getc(fp))!=EOF)
printf("%c",c);
getch();
}







