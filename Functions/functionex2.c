User Defined Function:
	Create a Own Function Called as User Defined Functions.

Syntax:
	
	Main()
		-Function Declarations
	Details:

	Return Type Function Name(Argument List)
	{
		Local function Variables;
		Function Executable Statement;
		return(Return Value);
	}

1.Add a Two Numbers
	Passing Values between Functions:

#include<stdio.h>
main()
{
	int addnum(int ,int);
	int sum,a,b;
	p("\n Enter TwoNumbers to be Summed");
	s("%d  %d",&a,&b);
	sum=addnum(a,b);
	p("\n The sum of %d  and %d =%d",a,b,sum);
	getch();
}
int addnum(num1,num2)
{
	int tot;
	tot=num1+num2;
	return(tot);
}


2.Swap a To Numbers:

main()
{
	int a=10;
	int b=20;
	swapv(a,b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}
swapv(c,d)
int c,d;
{
	int t;
	t=c;
	c=d;
	d=t;
	printf("x  = %d\n",c);	
	printf("y  = %d\n",d);	
	getch();
}

Find a Factorial:

main()
{
	int m,n;
	clrscr();
	s("%d",&n);
	m=fact(n);
	p("%d",m);
	getch();
}
fact(int v)
{
	int i,s=1;
	for(i=1;i<=v;i++)
	s=s*i;
	return s;
}
	
ain()
{
	int m,n;
	clrscr();
	s("%d",&n);
	m=fact(n);
	p("%d",m);
	getch();
}

Power Function
main()
{
	int x,y;
	double power();
	p("Enter x,y :\n");
	s("%d  %d",&x,&y);
	p("%d to power %d is =%f\n",x,y,power(x,y));
}
double power(x,y)
int x,y;
{
	double p;
	p=10;
	if(y>=0)
	while(y--)
	p*=x;
else
	while(y++)
	p/=x;
	return(p);
getch();
}




Example:
First Function Declare After Main Programs 

#include<stdio.h>

	int sqr(int x)
	{
		return x*x;
	}
	void main()
	{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
	printf("\n");
	printf("%d\n",i);
	printf("%d\n",sqr(i));

}
getch();
}


2.

First Main Programs After Fuction Declare 

/* Ctrl +F9 and alt +F5 */
#include<stdio.h>
main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
		printf("%d\n",sqr(i));
	}
	}
	int sqr(int x)
	{
		return x*x;
	}

3.
Result value store in variable name 
 used in ctrl+f9 and alt+f5  

void main()
{
	int cube(int);
	int c,i;
	for(i=1;i<=10;i++)
	{
		c=cube(i);
		printf("\n%d",i);
		printf("\n%d",c);
	}
	}
	int cube(int x)
	{
		return x*x*x;
	}

4.
 Boolean Function Ans is true or false 
 Ctrl+f9 after Alt +f5 
main()
{
	int isLeap(int);
	int year;
	printf("\n Enter Year :");
	scanf("%d",&year);
	if(isLeap(year))
		printf("\n is leap year");
	else
		printf("\n Not Leap Year");
}
int isLeap(int y)
{
	return(y%4==0 && y%100!=0 || y%400==0);
}

5.
Void Function . Not Return value 
 ctrl+f9 after alt+f5 
main()
{
	void welcome(char[]);
	char name[20];
	printf("\n Enter name :");
	scanf("%s",&name);
}
void welcome(char n[])
{
	printf("\n Welcome");
	printf("\n to learn c");
}


Array with Functions:

main()
{	
	static int nums[5]={2,18,1,27,16};
	find_max(nums);
}
find_max(vals)	//Find the maximum values
int vals[5];
{
	int i,max=vals[0];
	for(i=1;i<=4;++i)
	if(max<vals[i])max=vals[i];
	printf("\nThe Maximum Valus is :%d",max);
}


Example:
main()
{	
	static int nums[5]={2,18,1,27,16};
	find_max(nums);
	printf("\nThe Maximum Valus is :%d",find_max(nums,5));	
}
int find_max(vals,num_els)	//Find the maximum values
int vals[],num_els;
{
	int i,max=vals[0];
	for(i=1;i<=(num_els-1;4;++i)
	if(max<vals[i])max=vals[i];
	return(max);
}

Two-Dimensional Arrays:

main()
{
	static int val[3][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	display(val);
}
display(nums)
{	
	int nums[3][4];
	{
		int row,col;
		for(row=0;row<3;++row)	
		{
		   for(col=0;col<4;++col)
			printf("%4d",nums[row][col]);
			printf("\n");
		}
	}
}