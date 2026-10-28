//Nesting of Structure:
//~~~~~~~~~~~~~~~~~~~~
#include<stdio.h>
#include<conio.h>
struct
{
 int emp_id;
 char name[10];
 float bpay;
 struct
 {
  int da;
  int pf;
  int loan;
 }allowance;
 }emp;
 void main()
 {
  clrscr();
  printf("Enter the emp id,name,bpay");
  scanf("%d%s%f",&emp.emp_id,emp.name,&emp.bpay);
  printf("Enter the da,pf,loan");
  scanf("%d%d%d",&emp.allowance.da,&emp.allowance.pf,&emp.allowance.loan);
  printf("EMPLOYEE DETAILS\n");
  printf("~~~~~~~~~~~~~~~~~\n");
  printf("%d\t%s\t%.2f\n",emp.emp_id,emp.name,emp.bpay);
  printf("%d\t%d\t%d\n",emp.allowance.da,emp.allowance.pf,emp.allowance.loan);
  getch();
 }