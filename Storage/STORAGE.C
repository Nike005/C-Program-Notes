/*	Storage class
The are 4 scope varaible:
	1.Functions
	2.File
	3.Block
	4.Function prototype

Any variable declared in c can have any one of the 4 storage classess.
	1.Automatic Variable
	2.External Variable
	3.Static Variable
	4.Register Variable

1.Automatic Variable:
	Auto variable are defined inside a functions.By default auto variables.
*/
/*Write a prog to show the working of auto variable */
/*
main()
{
	int v=10;
	clrscr();
	printf("\n v value is :%d",v);
	call2();
}
void call1()
{
	int v=20;
	printf("\n v value is :%d",v);
}

call2()
{
	int v=30; /* auto int v=20
	call1();
	printf("\n v value is :%d",v);
	getch();
}
*/

 /* 2.External Variable
		The variable that are avilable to all the functions.i.e from entire
		program they can be accessed the variable are called external and
		Global Variable.

 /*Write a prg to show the working of external variables */
 /*
 int v=10;  /* extern int v=10;
 void main()
 {
	  clrscr();
	  call1();
	  call2();
	  printf("\nIn Main Value is  :%d",v);
 }
 call1()
 {
	  printf("\nIn Call1() v  Value is  :%d",v);
 }
 call2()
 {
	  printf("\nIn Call2() v  Value is  :%d",v);
	  getch();
 }
*/

/*Static Variables
	The static variables may be of an internal or external type,depending upon
	where it is declared.
*/
main()
{
	clrscr();
	for(;;)
		printf();
		getch();
}
print()
{
	int static m;
	m++;
	printf("\n m    :%d",m);
	if(m==3)
		exit(1);
}

4.Regity Variables:
