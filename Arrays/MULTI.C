// Multidimensional Array:
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	 int array[3][3][3][3];
	 int a,b,c,d;
	 clrscr();
	 for(a=0;a<3;a++)
	 for(b=0;b<3;b++)
	 for(c=0;c<3;c++)
	 for(d=0;d<3;d++)
	 array[a][b][c][d]=a+b+c+d;
	 for(a=0;a<3;a++)

