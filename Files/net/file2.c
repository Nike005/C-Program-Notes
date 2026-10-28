/* write a program to use w+ mode for writing and reading of a file */

#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
     FILE *fp;
char c=' ' ;
clrscr();
fp=fopen("data.txt","w+");
if(fp==NULL)
{
     printf("Cannot open file");
exit(1);
printf("Write data & to stop press '.':");
while(c!='.')
{
c=getche();
fputc(c,fp);
}
rewind(fp);
printf("\n Contents read");
while(!feof(fp))
printf("%c",getc(fp));
}
