//Special operator: sizeof()
#include<stdio.h>
#include<conio.h>
void main()
{
 int a=10;          //2 byte
 float b=23.22;     //4 byte
 char c[10]="ifc";  //1 byte
 clrscr();
 printf("%d Size of a is %d\n",a,sizeof(a));
 printf("%f Size of b is %d\n",b,sizeof(b));
 printf("%s Size of c is %d\n",c,sizeof(c));
getch();
}

