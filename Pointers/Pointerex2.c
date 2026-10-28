
1.	 /* pointer in c*/
        main()
        {
          int i=3;
          int *j;
          j=&i;

          clrscr();
          printf("Address of i = %d",&i);
          printf("\nAddress of i = %d",j);
          printf("\nAddress of j = %d",&j);
          printf("\n Value of j =%d",j);
          printf("\n Value of i =%d",i);
	  printf("\n Value of i =%d",*j);
	  *j=5;
          printf("\n Content of i = %d",*(&i));
          getche();
        }


2.

/* pointer in character type*/
main()
{
 char a[]="nagpur";
 char *s="nagpur";
 clrscr();
 s+=2;
 printf("%s\n ",s);
 s--;
 printf("%s",s);
}

3.
/* array in double dimension using pointers*/

main()
{
 int stud[5][2]= {
			{1234,56},
			{1212,33},
			{1434,80},
			{1312,78},
			{1203,75}

		  };


  int i,j;
  clrscr();
  for(i=0;i<5;i++)
  {
   for(j=0;j<2;j++)
	  printf("%d  ", *(*(stud+i)+j)); /*(stud[i]+j);*/

     printf("\n");
     }
}

4.
/* pointer array */
main()
{
  int *arr[4];
  int i=31,j=5,k=99,l=71,m;

  arr[0]=&i;
  arr[1]=&j;
  arr[2]=&k;
  arr[3]=&l;
  clrscr();
  for(m=0;m<=3;m++)
    printf("%d ",*(arr[m]));
}

5.

/* pointer to pointer*/
main()
{
 int p=111,*p1,**p2;
 p1=&p;
 p2=&p1;
 printf("\n %d",**p2);
 getche();
 }

6.
/* pointer function*/
main()
{
 int  display();
 int  ( *func1 ) ();
 clrscr();
 func1 = display;
 printf("Address of function display is %d",func1);
 (*func1) ();
 }
 display()
 {
   puts("\nlong live viruses!!");
 }

7.


/* function using pointer */
main()
{
 char *strcp();
 char *str;
 char *copy;
 char source[]="prakash";
 char target[100];
 str = strcp(target,source);
 printf("%s",str);
}

char *strcp(t,s)
char *t,*s;
{
 char *r;
 r=t;

 while(*s != '\0')
 {
   *t = *s;
   t++;
   s++;
 }
 *t='\0';
 return(r);
}

8.

/* pointer return value integer from the function*/

main()
{
  int *p;
  int *func();
  p=func();
  printf("%d",*p);
}
int *func()
{
 int i=20;
 return (&i);
}

9.

/* pointer array */
main()
{
  int *arr[4];
  int i=31,j=5,k=99,l=71,m;

  arr[0]=&i;
  arr[1]=&j;
  arr[2]=&k;
  arr[3]=&l;
  clrscr();
  for(m=0;m<=3;m++)
    printf("%d ",*(arr[m]));
}
10.

	/* passing a reference*/
        main()
        {
         int a=10;
         int b=20;

          swapv(&a,&b);
          printf("a=%d\n",a);
          printf("b=%d\n",b);
        }

        swapv(c,d)
        int *c,*d;
        {
	  int t;
          clrscr();
          t=*c;
          *c=*d;
          *d=t;
        }

11.

        /* passing a reference and return a value*/
        main()
        {
	 int r;
	 float a,p;
	 clrscr();
         printf("\nEnter  the radius");
         scanf("%d",&r);
         area(r,&a,&p);

	 printf("\narea = %.2f",*(&a));
         printf("\nPerimeter = %.2f",p);
        }

        area(r1,a1,p1)
        int r1;
        float *a1,*p1;
        {
          *a1=3.14 * r1 * r1;
          *p1=2 * 3.14 * r1;
        }

12.

/* to increment the pointer address = scale factor */
main()
{
 int i=3,*x;

 printf("Value of i= %d\n",i);
 x=&i;
 printf("Original value in x= %d\n",x);
 x++;

 printf("New value in x =%d",x);
 getche();
 }

13.

/* array using pointer */
main()
{
int n[]={24,34,12,4,56,17};
int i=0,*j;
j=&n[0];
clrscr();

while(i<=5)
{

 printf("\n Address = %d",j);
  printf("\n Element no. %d",*j);
 i++;
 j++; /* increment the point to next pointer */
}
}

14.


/* passing references using array to function */
main()
{
  int num[]={24,34,12,44,56,17};
  display(&num,6);
}

display(p,n)
int *p,n;
{
 int i=1;
 while(i<=n)
 {
  printf("Element =%d\n",*p);
  i++;
  p++;
 }
}

15.
/* different methods of access the array element using pointer*/
main()
{
  int num[]={24,34,12,44,56,17};
  int i= 0;
 while(i<=5)
 {
  printf("Element =%d",num[i]);
  printf("%d",*(num+i));
  printf("%d",*(i+num));
  printf("%d\n",i[num]);
  i++;

 }
}

16.
/* commant line argument */
main(argc,argv)
int argc;
char *argv[];
{
  int i;
  for(i=0;i<argc;i++)
     printf("%d = %s\n",i,argv[i]);
}

17.

main()
{
  int *p,i;
  clrscr();
  for(i=0;i<3;i++)
    scanf("%d",(p+i));

    for(i=0;i<3;i++)
    printf("%u\n",(p+i));
    getch();
}

18.

/* pointer arithemetic */
main()
{
int i=3,*x;
float j=1.5,*y;
char k='c',*z;
clrscr();

printf("The value of i = %d\n",i);
printf("The value of j = %f\n",j);
printf("The value of k = %c\n",k);
getche();

x=&i;
y=&j;
z=&k;

printf("The original value in x = %u\n",x);
printf("The original value in y = %u\n",y);
printf("The original value in z = %u\n",z);

x++;
y++;
z++;

printf("%u  New value in x = %d\n",x,*x);
  printf("%u  New value in y = %f\n",y,*y);
printf("%u  New value in x = %c\n",z,*z);
getche();
}

19.

