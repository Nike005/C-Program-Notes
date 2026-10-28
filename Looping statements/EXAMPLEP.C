#include<stdio.h>
//#include<conio.h>
void main()
{
 char name[10];
 int tam,eng,mat,sci,soc,tot=0;
 float avg;
 clrscr();
// printf("Enter the student name:");
// scanf("%s",name);
printf("\n\nEnter the Student Mark Details:-\n\n");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
printf("\n\nEnter the Tamil Mark:\t");
scanf("%d",&tam);
printf("\n\nEnter the English Mark:\t");
scanf("%d",&eng);
printf("\n\nEnter the Maths Mark:\t");
scanf("%d",&mat);
printf("\n\nEnter the Science Mark:\t");
scanf("%d",&sci);
printf("\n\nEnter the Social Mark:\t");
scanf("%d",&soc);
tot=tam+eng+mat+sci+soc;
avg=tot/5;
printf("\n\nOutput :-\n\n");
printf("\nTamil Mark\t:%d\n",tam);
printf("\nEnglish Mark\t:%d\n",eng);
printf("\nMaths Mark\t:%d\n",mat);
printf("\nScience Mark\t:%d\n",sci);
printf("\nSocial Mark\t:%d\n",soc);
printf("\n\n\t       ------\n\n");
printf("\nThe Total Marks:%d\n",tot);
printf("\n\n\t       ------\n\n");
printf("\nThe Average\t:%.2f\n",avg);
if(tam>=35&&eng>=35&&mat>=35&&sci>=35&&soc>=35)
{
 printf("\n\nResult\t : Pass\n\n");
}
 else
{
 printf("\n\nResult\t : Fail\n\n");
}
if(avg>=75)
{
 printf("\n\nHonours\n\n");
}
else
if(avg>=60)
{
 printf("\nGrade\t:First Class\n\n");
}
else
if(avg>=50)
{
 printf("\nGrade\t:Second Class\n\n");
}
else
if(avg>=40)
{
 printf("\nGrade\t:Third Class\n\n");
}
else
if(avg<40)
{
 printf("\nGrade\t:Fourth Class\n\n");
}
// printf("Student Name %s\t:",name);
 getch();
}