Example:

main()
{
	char nm[3][15],name[3][15];
	int age[2],basic[2],a[2],bas[2];
	FILE *fp;
	clrscr();
	fp=fopen("First.txt","w");
	for(i=0;i<3;i++)
	{
		printf("\nEnter the Name  :");
		scanf("%s",name[i]);
		printf("\nEnter the Age  :");
		scanf("%s",&age[i]);
		printf("\nEnter the Basic Pay  :");
		scanf("%s",&basic[i]);
		fprintf(fp,"\n%s\t   %d\t  %d",name[i],age[i],basic[i]);
	}
	fclose(fp);
	fp=fopen("First.txt","r");
	for(i=0;i<3;i++)
	{
		fscanf(fp,"%s   %d    %d",nm[i],&a[i],&bas[i]);
		fprintf("\n\t%s",nm[i]);
		fprintf("\n\t%d",a[i]);
		fprintf("\n\t%d",bas[i]);
	}
	fclose(fp);
	getch();
}

Run the programs    : c:\>type <FileName>


	



#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	struct emp
	{
		int eno;
		char ename[10];
		int sal;
		int comm;
		char desig[10];
	}e[10];
	FILE *fp;
	fp=fopen("emp.dat","w");
	clrscr();
	printf("Enter how many employee");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Employee No :");
		scanf("%d",&e[i].eno);
		fflush(stdin);
		printf("Enter the Employee Name :");
		scanf("%s",&e[i].ename);
		fflush(stdin);
		printf("Enter the Employee Designation :");
		scanf("%s",&e[i].desig);
		fflush(stdin);
		printf("Enter the Employee Salary :");
		scanf("%d",&e[i].sal);
		fflush(stdin);
		printf("Enter the Employee Commssion :");
		scanf("%d",&e[i].comm);
		fflush(stdin);
	}
	fwrite(&e,sizeof(e),n,fp);
/*	i=0;
	while(i<n)
	{
	  fprintf(fp,"%d %s %s %d %d",e[i].eno,e[i].ename,e[i].desig,e[i].sal,e[i].comm);
	  i++;
	}
*/
	clrscr();
	fclose(fp);
	printf("Datas Stored Sucessfully");
	getch();
}
