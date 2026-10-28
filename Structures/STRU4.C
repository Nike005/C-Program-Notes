//Structure within array:
#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno[3];
	char name[10];
	float per;
};
void main()
{
struct student a[3];
int i;
clrscr();
for(i=1;i<=3;i++)
{
scanf("%d %s %f",&a[i].rollno,a[i].name,&a[i].per);
printf("%d %s %f",a[i].rollno,a[i].name,a[i].per);
}
getch();
}
