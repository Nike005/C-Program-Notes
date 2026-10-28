/*Structure Initialization:
	We can initialize the values to the member variables at the
 declaration time.

 Example:       */
 #include<stdio.h>
 #include<conio.h>
 struct student
 {
 int rollno;
 char name[10];
 float per;
 };
 void main()
 {
 struct student a={101,"raja",89};
 clrscr();
 printf("Rollno : %d\n",a.rollno);
 printf("Name   : %s\n",a.name);
 printf("Percentage : %f\n",a.per);
getch();
 }