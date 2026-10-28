------------------------------------------------------------------------------------------------------------------------
			Conditional Statement:
------------------------------------------------------------------------------------------------------------------------
	The if conditional,execute different bits of code based on.If the if condition is 
evaluated as false.Then the set the instruction under else are executed.

1.If statement
	Block if Statement
2.if..else statement
	Block if else statement
3.Nested if statement
4.switch case statement
5.()?: Decision making operators

1.The if Statement:
	The if statement is used to specify conditional  execution of program statement,or
a group of statements enclosed in braces.

1.Simple if Statement:

Syntax:
	if(condition)
		Statement;
	

Example: Find out the pass
	main()
	{	
		int mark;
		clrscr();
		printf("\nEnter the Mark :);
		scanf("%d",&mark);
		if(mark>=35)
			printf("You are Passed");
		getch();
	}

Example: Find out Biggest Noumbers.
	main()
	{	
		int a,b;
		clrscr();
		printf("\nEnter the Two Numbers :);
		scanf("%d%d",&a,&b);
		if(a>b)
			printf("A is a Biggest");
		getch();
	}

Example: Find out Eligiable Vote.
	main()
	{	
		int age;
		clrscr();
		printf("\nEnter the Age :);
		scanf("%d",&age);
		if(age>=18)
			printf("You are Eligiable Vote");
		getch();
	}

Example: Find the positive Number 
#include<stdio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter a  Number :");
	scanf("%d",&a);
	if(a>0)
	    printf("\n Posite Numbers ");
	}

Example: Find out the Biggest Numbers of Three Numbers.

main()
{
	int a,b,c;
	printf(\n"Enter the Three Numbers :");
	scanf("%d %d %d",&a,&b,&c);
	int max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	printf("\nThe maximum is :",max);

More than if Condition:
	int a,b,c,max;
	printf("\nEnter the Three No :";
	scanf("%d %d %d",&a,&b,&c;
	if(a>b && b>c)	
		max=a;
	if(b>a && b>c)
		max=b;
	if(c>a && c>b)
		max=c;
	printf("\nThe maximum is :",max);	


2.Block if Statement:

Syntax:
	if(condition)
	{
		Statement;
		Statement;
	}
	{
		statement;
		Statement;
	}


Example: Find out the Eligiable Vote:
	main()
	{	
		int age;
		clrscr();
		printf("\nEnter the Age :);
		scanf("%d",&age);
		if(age>=18)
		{
			printf("\nYou are Age is  :%d",age);
			printf("    Welcome");
		}
		{
			printf("\nYur are Eligiable Vote");
			printf("\nYour are Majar");
		}
		getch();
	}


Example:

Used for simple if and  Logical Operators:
		1.&&  2.|| 3.!
	Percentage above or equal to 60 -First Class
	Percentage Between 50 and 59   -	Second Class
	Percentage Between 40 and 49  - Third Class
	Percentage less than 40              -Fail

	int m1,m2,m3,m4,m5,per;
	printf("\nEnter the Five Marks :");
	scanf("%d.............");
	per=(m1+m2+m3+m4+m5);
	if(per>=60)
		printf("First Class");
	if((per>=50) && (per<60))
		printf("Second Class");
	if((per>=40) && (per<50))
		printf("Third Class");
	if(per<40)
		printf("Fail");
	end if


Example:
	Employee pay List for Simple if Statement.

	sno	Name	Bpay	Hra	Da	Gpay    Lic      Pf	Ded	Npay  Grade

	Gpay	=Bpay+hra+da
	Ded	=Lic+pf
	Npay	=Bpay-ded

	Napy above or equal to 10000 - A
	Percentage Between 5000 and 5999   -	B
	Percentage Between 4000 and 4999  - C
	Percentage less than 3999              -D
	
----------------------------------------------------------------------------------------------------------------
2.The if...else Statement:
	The if..else statement directs the computer to select a sequence of one more instructions
based on the result of a Comparision.

Syntax:
	if(condition)
		Statement;
	else
		Statement;

Block if statement:
	if(condition)
	{
		Statement;
	}
	else
	{
		Statement;
	}

	
Example:
	int age;
	printf("\nEnter your age please :");
	scanf("%d",&age);
	if(age>=18)
		printf("\nSo you are eligiable to vote");
	else
		printf("\nyou are not eligiable vote ");


Example:
	To find out the Odd and Even Numbers:
	
	int no;
	printf("\nEnter the No :");
	scanf("%d",&no);
	if(no%2==0)
		printf("\nThe No is Even Number");
	else
		printf("\nThe No is Odd Number");

Example:
	Program to check wether the year is leap year or Not:

	int year;
	printf("\nEnter the Year :");
	scanf("%d",&year);
	if((year%4==0 && year %100 !=0) || (year%400==0))
	{
		printf("\n The year is a Leap Year");
	else
		printf("\nThe year is not leap year");
	}
	}
Example:
	1.Citizen is Married
	2.Citizen is an unmaried male above 30 year of age.
	3.Citizen is an unmarried female above 25 years of age.

	char sex,ms;
	int age;
	printf("Enter the age,sex,marital status");
	scanf("%d%c%c",&age,&sex,&ms);
	if((ms=='M')|| (ms=='U') && sex=='M' && age>30) || (ms=='U' &&sex=='F' && age>25)
		printf("Citizen is insured");
	else
		printf("Citizen is not insured");
	end if		
----------------------------------------------------------------------------------------------------------------
3.Nested if Statement:
	More than if..else  statement:	

Syntax:
	if(condition)
		statement;
	elseif(condition)
		statement;
	elseif(condition)
		Statement;
	else
		Statement;

Syntax:

 if(Condition 1)
  if(condition 2)
       statement 1;
   else if (condition 3)
         Statement 2;
   else
        Statement 3;
   else
        Statement 4;


Example: (Student Mark List)
	int mark;
	printf("\nEnter the Mark Please :");
	scanf("d",&mark);
	if(mark<40)
		printf("\nYou Failed int the exam");
	else if(mark<50 )
		printf("\nYou Passed in the Third class");
	else if(mark<60)
		printf("\nYou Passed in the Second class");
	else
		printf("\nYou Passed in  First class");
	}

Example: (Max Numbers)
	int a,b,c,max;
	printf("\nEnter three Numbers :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	if(a>c)
		max=a;
	else
		max=c;
	else if(b>c)
		max=b;
	else
		max=c;
	printf("\nThe Maximum is :%d",max);
----------------------------------------------------------------------------------------------------------------	
4.Switch statement
	a switch statement is used to choose one option out of many,based on the value
of an expression.

  Switch(Expression)
   {
       Case Value 1:
                  Statement 1;
                  Break;
       Case Value 2:
              Statement;
              Break;
	-----------
      Default:
            Statement n;
}

Example:1
	/* This program to input a day of week between 1 to 7 */

#include<stdio.h>
void main()
{
	int nday;
	clrscr();
	printf("\n Enter a day of week between 1 to 7:");
	scanf("%d",&nday);
	switch(nday)
	{
		case 1: printf(\nSunday");
		break;
		--------------------
		default: printf("\n Invalied input");
	}
	getch();
}

Example:2
    #include<iomanip.h>
    void main()
    {
	int a,b,ch;
	printf("\nEnter the 2 No :");
	scanf("%d %d",&a,&b);
	printf("\n1.Addition ");
	printf("\n2.Subtraction ");
	printf("\n3.Multiplication ");
	printf("\n4.Divisions ");
	printf("\nEnter your choice(1..4)";
	scanf("%d",&ch);
	switch(ch)
		{
		case 1:
		     Printf("\nAdd a Two Numbers :%d",a+b);
		     break;
		case 2:
		     printf("\nSub a Two Numbers :%d",a-b);
		     break;
		case 3:
		     printf("\nMulti a Two Numbers:%d",a*b);
		     break;
		case 4:
		     printf("\nDivi  a Two Numbers:%d",a/b);
		     break;
		default:
		    printf("\nInvalied Numbers");
		}
   }
		
-----------------------------------------------------------------------------------------------------------------		
			Looping Structure:
-----------------------------------------------------------------------------------------------------------------		
     A loop comprises of instructions that are executed repeatly until some specific conditions
is satisfied.The following are different loop statement groups that can be used.


1.Using a For  Loop
2.Using a While Loop
3.Do while  and Do until Loop

1.For Loop:
	Loop is called a counter-style loop process.It is done by incrementing a counter as part
of the processing.

Syntax:
	for(initialization;condition;Increment/Decrement)
	   {
		Statement;
		Statement;
	 }


Example:
a)	main()
	{
		int i;
		for(i=1;i<=10;i=i+1)
			printf("%d\n",i)
		getch();
	}

Comma Operators:

Example:      


b)	main()
	{
		int i;
		for(i=1;i<=10;)
		{
			printf("%d\n",i)
			i=i+1; or i++;
		}
		getch();
	}

Example:
c)	main()
	{
		int i=1;
		for(;i<=10;i=i+1)
			printf("%d\n",i)
			getch();
	}


d)	main()
	{
		int i=1;
		for(;i<=10;)
		{
			printf("%d\n",i);
			i=i+1;
		}
			getch();
	}

e)	main()
	{
		int i;
		for(i=0;i++<10;)
			printf("%d\n",i)
			getch();
	}

f)	main()
	{
		int i;
		for(i=0;++i<=10;)
			printf("%d\n",i)
			getch();
	}

Example:
/* Display 10 Number print */

	#include<iostream.h>
	#include<conio.h>

	void main()
	{
		int i;
		for(i=1;i<=10;i++)
		printf("I value is =",i);
	}		


Example:
/* To Print the square of first i Number */
#include<stdio.h>
main()
{
	int i;
	clrscr();
	printf("Number \t Square(no)\n\n");
	for(i=1;i<=5;i++)
		printf("%d \t %d\n",i,i*i);
		getch();
}

Find a Multiplication Table:
	#include<iostream.h>
	#include<conio.h>
	void main()
	{
		int n,i;
		printf("Enter a Table No :");
		scanf("%d",&n);
		for(i=1;i<=20;i=i++)
		      printf("%d * %d =%d",\n i,n,n*i);
	}


For Even Numbers:( 1 To 100)
	#include<iostream.h>
	#include<conio.h>
	void main()
	{
		int i=1;
		for(i=2;i<=100;i=i+2)
		   printf("Even is :",i);
	}

For Odd Numbers:( 1 To 100)
	#include<iostream.h>
	#include<conio.h>
	void main()
	{
		int i=1;
		for(i=99;i>=1;i=i+2)
		   printf(\n"Odd No is :",i);
	}
Find a Square Root: (1 To 20)
	#include<iostream.h>
	#include<conio.h>
	void main()
	{
		int i=1;
		for(i=1;i<=20;i=i++)
		   cout<<"Square Root of  :"<<i<<"="<<i*i<<endl;
	}


Find out a Factorial Numbers:
	int no;
	int count;
	int fact=1;
	printf("\nEnter the No :");
	scanf("%d",&no);
	for(count=1;count<=no;count++)
	{
		fact=fact*count;
	}
	printf("\nThe Factorials of the Given No is :%d",fact);
	getch();
	}

Example: 
	Calculation of simple interest for 3 sets of principle ,no of year 

	int p,n,count;
	float si,r;
	for(count=1;count<=3;count=count+1)
	{
		printf("\nEnter the p n and r :");
		scanf("%d%d%f",&p,&n,&r);
		si=p*n*r/100;
		printf("\nThe Result is :%f",si);
	}
	}
	

-----------------------------------------------------------------------------------------------------------------------
2.While Statements
	The while statement is used to carry out looping operations.Hence the loop is executed
until the expression evaluates to true.

Syntax:	
	Intial value;
	while(condition)
	{
		Statement;
		Increment loop;
	}
Example for display a 10 Numbers.

	#include<iostream.h>
	#include<conio.h>
	void main()
	{
		int i=1;
		while(i<=10)
		{
			cout<<"I value ="<<i<<endl;
			i++;
		}
	}
Note:
	1.First Condition after Statement executed.	

Example:
	Calculation of simple interest for 3 sets of p,n and r

	int p,n,count;
	float si,r;
	count=1;
	while(count<=3)
	{
		printf("\nEnter the Value for Principle ,Year ,Rate of Int :");
		scanf("%d%d%f%",&p,&n,&r);
		si=p*n*r/100;
		printf("\nSimple interest is :%f",si);
		count=count+1;
	}
	getch();
	}

Example:
	To find out the Given No is Summed.

		void main()
		{
			int sum,n;
			sum=0;
			n=1;
			while(n<=10)
			{
				sum=sum+1;
				n=n+1;
			}
			printf("Sum is =%d",sum);
		}

Example:
Execution of a Loop an unknown number of times.
	main()
	{
		char another='y';
		int num;
		while(another=='y')
		{
			printf("\nEnter a Numbers :");
			scanf("%d",&num);
			printf("\nSquare root of :%d",num,num*num);
			printf("\nDo you want to Another (y/n) :");
			scanf("%c",&another);
		}
	}
-----------------------------------------------------------------------------------------------------------------------
3.Do-While Stements

Syntax:
	do
	{
		Statement;
		Statement;
	}
	while(Condition);
Example:
	
	#include<iostream.h>
	#include<conio.h>
	void main()
	{
		int i=1;
		do
		{
			cout<<"Do Value is ="<<i<<endl;
			i++;
		}
		while(i<=10);

Note:	}
	First Statement after Conditions.

Example:
	To sum of nth Numbers.

	void main()
	{
		int i,sum;
    		i=1;
		sum=0;
		do
		{
			sum=sum+1;
			i=i+1;
		}
		while(sum<=20)
		printf("%d %d",i,sum);
	}

Example: 
	Find the average 5 Numbers.

#include<stdio.h>
main()
{
	int n,count;
	float x,average,sum;
	printf("\nHow many Number Average :");
	scanf("%d",&n);
	count=1;
	do
	{
		printf("\nEnter the Number  %d   :",count);
		scanf("%f",&x);
		sum+=x;
		count++;
	}while(count<=n);
	average=sum/n;
	printf("\nThe Average is %f\n :",average);
	getch();
}


------------------------------------------------------------------------------------------------------
The break Statement:
------------------------------------------------------------------------------------------------------
	The Break statement is used to terminate loops or exit from a switch.
Used for 1.do..while 2.for 3.switch statement

Example:
#include<stdio.h>
main()
	{
		int x=1;
		while(x<=10)
		{
			printf("x is =%d\n",x);
			if(x==5)
				break;
				x++;
		}
		getch();
	}

Example: Find out thr Prime or Not.
main()
{
	int num,i;
	printf("\nEnter a Number :");
	scanf("%d",&num);
	i=2;
	while(i<=num-1)
	{
		if(num%i==0)
		{
			printf("\nNot a Prime Numbers");
			break;
		}
		i++;
	}
	if(i==num)
		printf("Prime Numbers");
	}
Example:
	main()
	{
		int i=1,j=1;
		while(i++<=100)
		{
			while(j++<=200)
			{
				if(j==150)
				break;
				else
					printf("%d",%d\n",i,j);
			}
		}
	}
------------------------------------------------------------------------------------------------------
The Continue Statement:
------------------------------------------------------------------------------------------------------
The continue statement is used to bypass the remainder of the current pass though a loop.
Used for while,do-while or for statement.

Example:
#include<stdio.h>
main()
{
	int n,count,aveg=0;
	float x,average,sum=0;
	printf("How many Numbers ?:");
	scanf("%d",&n);
	cout=1;
	do
	{
		printf("x = ");
		scanf("%f",&x);
		if(x<0)
		{
			printf("Error -Negative Value for x\n");
			continue;
		}
	sum+=x;
	++navg;
	count++;
	}
	while(count<=n);
	average=sum/navg;
	printf("\nThe Average is %f\n :",average);
	getch();
}

The goto Statement:
	A goto statement can cause program control to end up almost anywhere in the programs.

Syntax:
	goto <labelName>:

Example:
	main()
	{
		int a,b;
		clrscr();
		printf("\nEnter the Two Numbers :");
		scanf("%d%d",&a,&b);
		ans=a+b;
		if(ans>30)
			goto cont;
		else
			printf("\nThe Result is :%d",ans);
			exit();
		cont:
			printf("\nThe Result is out of Sum");
			getch();
	}	
------------------------------------------------------------------------------------------------------
			Define
------------------------------------------------------------------------------------------------------
To collection of some values and functions called as define.

Syntax:
	#define <variableName> <Size>

Example:
	#define name 10

Example:
	#include<iostream.h>
	#include<conio.h>
	#define max 10
	void main()
	{
		int i;
		for(i=1;i<=max;i++)
		cout<<"Result is :"<<i<<endl;
	}

Example:
	#include<iostream.h>
	#include<conio.h>
	#define and  &&
	#define or ||
	void main()
	{
		int i,j=34,k=90;
		if(i<10) and (j<20 or k<45))
		         cout<<"I am Fine<<endl;
		else
		         cout<<"Very Good";
	}	
--------------------------------------------------------------------------------------------------------------	
		Conditional Operators
--------------------------------------------------------------------------------------------------------------	
Syntax:
	Exp 1? Exp 2:Exp 3;
Example:
	#include<iostream.h>
	#include<conio.h>
	void main()
	{
		int a,b,c,d;
		cout<<"Enter the Two No :";
		cin>>a>>b;
		c=(a>b)?a:b;
		cout<<"Biggest No is ="<<c<<endl;
		if(a>b)
			d=a;
		else
			d=b;
		cout<<"Biggest No is =:"<<d<<endl;
	}
----------------------------------------------------------------------------------------------------------------		

2.While statements
	The while statement is used to carry out looping operations.Hence the loop is executed
until the expression evaluates to true.
Syntax:
	while(expression)
		Statement;
Example:
	/* Display a 10 number */
#include<stdio.h>
void main()
{
	int n=1;
	while(n<=10)
	{
		printf("%d \n",n++);
	}
}

Note : First condition
        : After Statement.

	
3.Do while  statement:
	Note:First Statement
	        :After Conditio
Syntax:
	do
	   statement;
	 while(condition);
		
Example:
	
or Do Until statements
	Allows to repeat the code while or until a conditions is met.
Syntax:
	





1.While statements
	Syntex:
		while(condition)
		{
			Statements;
		}

Example:
		void main()
		{
			int sum,n;
			sum=0;
			n=1;
			while(n<=10)
			{
				sum=sum+1;
				n=n+1;
			}
			printf("Sum is =%d",sum);
		}

2.The Do Statements:
	Syntex:
		do
		{
			Statements;
		}
		while(condition);

Example:
	void main()
	{
		int i,sum;
    		i=1;
		sum=0;
		do
		{
			sum=sum+1;
			i=i+1;
		}
		while(sum<=20)
		printf("%d %d",i,sum);
	}


Example:
		/* Printing of  Multiplication Table */
	#define COLMAX 10
	#define ROWMAX 12
	
	main()
	{
		int row,col,y;
		row=1;
		printf("            Multiplication Table           \n");
                printf("            --------------------           \n");
		do
		{
			col=1;
			do
				{
				   y=row*col;
				   printf("%4d",y);
				   col=col+1;
				}
			while(col<=COLMAX);
			printf("\n");
			row=row+1;
		}
			while(row<=ROWMAX);
			printf("------------------------------\n");
	}


3.The For statements:
	Syntex:
		for(initialization;text condition;increment/Decrement)
		{
		   statements;
		}
Example:
		void main()
		{
			int i;
			for(i=0;i<=9;i=i+1)
			{
				printf("%d",x);
			}
		}

Output :0 to 9

Example:
			void main()
		{
			int i;
			for(i=9;i>=0;i-1)
			{
				printf("%d",x);
			}
		}		
Output: 9 to 0

Example:
		void main()
		{
			int n,sum;
			sum=0;
			for(n=1;n<=10;n=n+1)
			{
				sum=sum+n;
			}
			        printf("Sum of No "%d",sum);
			}

Example:
		void main()
		{
		 int x,y;
		 prinf("Enter the Table No :");
		 scanf("%d",&x);
		 for(y=1;y<=x;y++)
		 {
			printf("%d * %d = %d",y,x,x*y);
		 }
		 }


Example for Multiplication Table:
	void main()
	{
	 int i,x,m,t=0,r;
	 clrscr();
	 printf("Enter the Table Name :");
	 scanf("%d",&m);
	
	 for(i=0;i<=20;i++)
	 {
		printf("\n");
		r=t*m;
		printf("%d*%d=%d",t,m,r);
		t++;
		}
		getch();
	}



Example:
	
	void main()
	{
		int x,y;
		int count,n;
		printf("Enter the Value of x and y :");
		scanf("%d %d",&x,&n);
		y=1;
		count=1;
		
		while(count<=n);
		{
			y=y*x;
			count++;
		}
		printf("x is=%d;n=%d;x to power n=%d",x,n,y);
	}

Example:
	/*         Student Mark List       */

#define FIRST 360
#define SECOND 240

main()
	{
		int n,m,i,j,rno,marks,tot;
		printf("Enter Number of students and Subject \n");
		scanf("%d %d",&n,&m);
		printf("\n");
		
		for(i=1;i<=n;++i)
		{
			printf("Enter Roll No :");
			scanf("%d",&rno);
			tot=0;
			printf("\nEnter Marks of %d sujects for roll no %d \n",m,rno);
			
			for(j=1;j<=m;j++)
			{
				scanf("%d",&marks);
				tot=tot+marks;
			}
			printf("Total Marks  =%d ",tot);
			if(tot>=FIRST)
			 printf("First Class");
			else if(tot>=SECOND)
			 printf("Second Class");
			else
				printf("(***  FAIL ***)\n\n");
		}
	}

Jumps in Loops:
	1.break;
Example:
		/*  Find a Sum and Average in break   */
main()
	{
		int m;
		float x,sum,average;
		printf("Enter a Negative Number is end\n\n");
		sum=0;
		for(m=1;m<=1000;++m)
		{
			scanf("%f",&x);
			if(x<0)
				break;
			sum+=x;
		}
		average=sum/(float)(m-1);
		printf("\n");
		printf("Number of values = %d\n",m-1);
 		printf("Sum              =%f\n",sum);
		printf("Avarege          =%f\n,average);
	}

Skipping a part of a loop:
	*continue

Example:
		/*  Sum of Square root		*/
#include<stdio.h>
main()
	{
		int count,negative;
		double number,sqroot;
		
		printf("Enter 9999 to stop\n");
		count=0;
		negative=0;
		
		while(count<=100)
		{
		 printf("Enter a Number");
		 scanf("%lf",&number);
		
		if(number==9999)
		 break;
		if(number<0)
		 continue;
		}
		sqroot=sqrt(number);
		printf("Number        =%lf\nSquare root  =%lf\n\n",number,sqroot);
		count++;
	}
	printf("Number of items  done  =%d\n",count);
	printf("\n\nNegative items     =%d\n",negative;
	printf("End of Data\n");
        }

		