/*Operators in C:
1. Arithmetic operators. (+,-,*,/,%)
2. Relational operators.(<,>,==,>=,<=,!=)
3. Logical operators.(&&,||,!)
4. Assignment operators.(=)
5. Bitwise operators.
6. Special operators. (Comma, sizeof()  )
7. increment/decrement operator.(++,--)
8. Conditional operator.(expression?true :false)
0
1. Arithmetic operators:
	+ -Addition
	- -Subtraction
	* -Multiplication
	/ -Division
	% -Modulus
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter two integers:\n");
 scanf("%d%d",&a,&b);
 printf("The addition is :%d\n",a+b);
 printf("The Multiplication is:%d\n",a*b);
 printf("The Division is :%d\n",a/b);
 printf("The Subtraction is:%d\n",a-b);
 printf("The Modulus val is :%d\n",a%b);
 getch();
}



























