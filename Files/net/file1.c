/* write a program to write data to text file and read it */

#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
    FILE *fp;
char c=' ';
clrscr();
fp=fopen("data.txt","w");
if(fp==NULL)
{
    printf("Cannot open file");
exit(1);
}
printf("Write data & to stop press'.' :");
while(c!='.')
{
c=getchar();
fputc(c,fp);
}
fclose(fp);
printf("\n Contents read:");
fp=fopen("data.txt","r");
while(!feof(fp))
printf("%c",getc(fp));
}
