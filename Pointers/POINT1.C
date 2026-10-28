/*Pointers:
	It is speical variable name which is given to the variables.
It is used to find the address of the variables.

Advantages using Pointers:
1) We can directly access the memory.
2) We can reduce the program coding
3) We can save memory space.

Declaration:

	datatype *var_name;
The pointer variable always precided by the astrisk mark(*).

Address operator:
 The & symbol is used to get the address of the variable.

Control string:
 %u is used to display the address of the variables.

 Example:*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a=10,*p;
 clrscr();
 p=&a;
 printf("%d is stored in %u",a,p);
 getch();
 }