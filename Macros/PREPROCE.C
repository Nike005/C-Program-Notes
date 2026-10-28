/*C Preprocessors:
	It is a processor which is used to compile the symbolic constants in
the program. The compiler doesnot process the symbolic constants .(We donot
use the symbolic constants in the left side).
Symbolic constants:   */
#include<stdio.h>
#include<conio.h>
#define M 10
void main()
{
clrscr();
printf("M val is %d",M);
printf("\nM square is %d",M*M);
getch();
}
