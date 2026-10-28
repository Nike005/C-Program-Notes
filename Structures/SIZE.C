/*sizeof operator:
	This is used to find the size of the structure.
Example:  */
#include<stdio.h>
#include<conio.h>
struct emp
{
	int idno;
	char name[10];
	float bpay;
};
void main()
{
struct emp a;
clrscr();
printf("The size is %d",sizeof(a));
getch();
}
/*int 2 bytes
char 1 byte
float 4 byte*/