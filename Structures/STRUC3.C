// Comparison of structure variables:
// Example:       */
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
 struct student b={102,"rani",77};
 clrscr();
 if(a.rollno==b.rollno)
 printf("The rollnos are equal");
 else
 printf("The rollnos are not equal");
 getch();
 }
