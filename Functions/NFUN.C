/*Nesting of functions:
	If one function inside the other one is known as Nesting of functions.
Example:     */

#include<stdio.h>
#include<conio.h>
void priya();
void nandhini();
void ramya();
void main()
{
clrscr();
printf("Srivasavi College\n");
priya();
getch();
}
void priya()
{
printf("Kandhan college\n");
nandhini();
}
void nandhini()
{
printf("Vellalar");
ramya();
}
void ramya()
{
printf("IFC-Advance happy new year");
}