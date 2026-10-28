/* Write a program to open a file in append mode and add new records in it */

#include<stdio.h>
#include<conio.h>
#include<process.h>
void  main()
{
  FILE *fp;
char c=' ';
clrscr();
fp=fopen("data.txt","a+");
if(fp==NULL)
{
printf("Cannot open file");
exit(1);
};
printf("Write data & to stop press'.' :");
while(c!='.')
{
c=getche();
fputc(c,fp);
}
printf("\nContents read");
rewind(fp);
while(!feof(fp))
printf("%c",getc(fp));
getch();
}
