
Example for Multifling a Two Numbers : 1

#include <stdio.h>
main()
{
 FILE *fp;
 int i,j,n,r;
  fp=fopen("multipy.dat","w");
  printf("\nEnter the number ");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    r=i*n;
    fprintf(fp,"\n %d  * %d  = %d",i,n,r);
  }
  getche();
}


/*			   fprintf() and fscanf()

  - the fprintf() and fscanf() both are similar to printf() and scanf()
    except that the first two work on files

  - syntax : fprintf(fp, "control string",list);

	     fscanf(stream or fp,"control string",list);				*/



/* 			Writing data into File				*/

#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

FILE *fp1;

char filename[20],name[25];
int age;

printf("\nEnter the file name : ");
scanf("%s",filename);

fp1 = fopen(filename,"w");

printf("Enter the name : ");
fscanf(stdin,"%s",name);
printf("Enter the age  : ");
fscanf(stdin,"%d",&age);

fprintf(fp1,"%s\n%d\n",name,age);
// it's important to separate each value by \n (when writing into file)
fclose(fp1);

fprintf(stdout,"\n\n");
fp1 = fopen(filename,"r");

printf("Name\t\tAge\n");

fscanf(fp1,"%s",name);
fprintf(stdout,"%s\t\t",name);
fscanf(fp1,"%d",&age);
fprintf(stdout,"%d\n",age);

fclose(fp1);
fprintf(stdout,"\n\n");
fp1 = fopen(filename,"r");

printf("Name\t\tAge\n");

fscanf(fp1,"%s",name);
fprintf(stdout,"%s\t\t",name);
fscanf(fp1,"%d",&age);
fprintf(stdout,"%d\n",age);

fclose(fp1);


getch();
}






Example:2

#include <stdio.h>
# include <dos.h>
main()
{
  FILE *fp,*fp1;
  char ch,name[12];
  int nol=0,noc=0,not=0,now=1;
  clrscr();
  printf("\n Enter the filename ");
  scanf("%s",name);

  fp=fopen(name,"r");
  fp1=fopen("Result","w");

  if(fp== NULL)
  {
   printf("Cannot open the file %s",name);
   getche();
   exit();
  }

  while(1)
  {
   ch=getc(fp);

   if(ch == EOF)
     break;

   if(ch != ' ' && ch != '\n' && ch != '\t')
   noc++;

   if(ch == ' ')
     now++;

   if(ch == '\n')
     nol++;
   if(ch == '\t')
     not++;

}
if( now == 1 ) nol++;

fclose (fp);
clrscr();
printf("\n");
printf("\t \t %s \n",name);
printf("\n Number of characters = %d",noc);
printf("\n Number of words      = %d",now);
printf("\n Number of tabs       = %d",not);
printf("\n Number of lines      = %d",nol);
getche();
}

Example:3

# include "stdio.h"

main()
{
  FILE *fp;
  char ch,name[12];
  int nol=0,noc=0,not=0,nob=0;
  clrscr();
  printf("\n Enter the filename ");
  scanf("%s",name);

  fp=fopen(name,"r");

  if(fp== NULL)
  {
   printf("Cannot open the file %s",name);
   getche();
   exit();
  }

  while(1)
  {
   ch=getc(fp);

   if(ch == EOF)
     break;

   noc++;

   if(ch == ' ')
     nob++;

   if(ch =='\n')
     nol++;

   if(ch == '\t')
     not++;

}
fclose (fp);
clrscr();
printf("\n");
printf("\t \t %s \n",name);
printf("\n Number of characters = %d",noc);
printf("\n Number of blanks     = %d",nob);
printf("\n Number of tabs       = %d",not);
printf("\n Number of lines      = %d",nol);
getche();
}

Example:4

#include<stdio.h>
main()
{
  FILE *fs,*ft;
  char ch,name1[12],name2[12];
  clrscr();
  printf("\n Enter the Source filename ");
  scanf("%s",name1);
  fs=fopen(name1,"r");
  if(fs== NULL)
  {
   printf("\n Cannot open the source file %s",name1);
   getche();
   exit();
  }
  printf("\n Enter the Destination filename ");
  scanf("%s",name2);
  ft=fopen(name2,"w");
  if(ft == NULL)
  {
   printf("\n Cannot open the destination file %s",name2);
   getche();
   exit();
  }

  while(1)
  {
   ch=getc(fs);

   if(ch == EOF)
     break;
   else
     putc(ch,ft);
  }

fclose (fs);
fclose (ft);
clrscr();
gotoxy(10,15);
printf(" The copied from %s to %s ",name1,name2);
getche();
}

Example:5

#include <stdio.h>
main()
{
 FILE 	*fp;
 char s[80];
 fp=fopen("poem.txt","w");
 if(fp==NULL)
 {
   puts("Cannot Open File");
   getche();
   exit();
 }
 printf("Enter a few lines of text :\n");
 while(strlen(gets(s)) > 0)
 {
    fputs(s,fp);
    fputs("\n",fp);
 }
 fclose(fp);
}

Example: 6

#include <stdio.h>

main()
{
 FILE 	*fp;
 char s[80];
  char name[12];
 fp=fopen("poem.txt","r");
 if(fp==NULL)
 {
   puts("Cannot Open File");
   getche();
   exit();
 }
 clrscr();
 printf("The Content of Poem.txt is\n\n");
 while(fgets(s,80,fp)!= NULL)
 {
  printf("%s",s);
 }
 fclose(fp);
}

Example:7

#include <stdio.h>
main()
{
  FILE *fp;
  char another='y';
  char name[40];
  int age;
  float bp;

  fp=fopen("Employee.dat","w");

  if(fp== NULL)
  {
    puts("Cannot Open File");
    getche();
    exit();
  }

  while(another == 'y')
  {
   printf("\n Enter the name,age,basic pay");
   scanf("%s %d %f",name,&age,&bp);
   fprintf(fp,"%s %d %f",name,age,bp);
   printf("\n Another Employee(y/n)");
   fflush(stdin);
   another=getchar();
  }
  fclose(fp);
}

Example:8

#include <stdio.h>
main()
{
  FILE *fp;
  char name[40];
  int age;
  float bp;

  fp=fopen("Employee.dat","r");

  if(fp== NULL)
  {
    puts("Cannot Open File");
    getche();
    exit();
  }
  clrscr();
  while(fscanf(fp,"%s %d %f",name,&age,&bp)!= EOF)
  {
   printf("\n%s\t\t %d \t%.2f",name,age,bp);
  }
  fclose(fp);
  getche();
}


Example:9

#include<stdio.h>
main()
{
  FILE *fp;
  char ch,name[12];
  int nol=0,noc=0,not=0,nob=0;
  clrscr();
  printf("\n Enter the filename ");
  scanf("%s",name);

  fp=fopen(name,"rb");

  if(fp== NULL)
  {
   printf("Cannot open the file %s",name);
   getche();
   exit();
  }

  while(1)
  {
   ch=getc(fp);

   if(ch == EOF)
     break;

   noc++;

   if(ch == ' ')
     nob++;

   if(ch =='\n')
     nol++;

   if(ch == '\t')
     not++;

}
fclose (fp);
clrscr();
printf("\n");
printf("\t \t %s \n",name);
printf("\n Number of characters = %d",noc);
printf("\n Number of blanks     = %d",nob);
printf("\n Number of tabs       = %d",not);
printf("\n Number of lines      = %d",nol);
getche();
}

Example:10

#include <stdio.h>
main()
{
  FILE *fp;
  char another='y';
  struct employee
  {
  char name[40];
  int age;
  float bp;
  };
  struct employee e1;

  fp=fopen("Employee.dat","w");

  if(fp== NULL)
  {
    puts("Cannot Open File");
    getche();
    exit();
  }

  while(another == 'y')
  {
   printf("\n Enter the name,age,basic pay");
   scanf("%s %d %f",e1.name,&e1.age,&e1.bp);
   fprintf(fp,"%s %d %f",e1.name,e1.age,e1.bp);

   printf("\n Another Employee(y/n)");
   fflush(stdin);
   another=getchar();
  }
  fclose(fp);
}

Example:11

# include <stdio.h>
# include "process.h"
main()
{
  FILE *fp;
  struct employee
  {
  char name[40];
  int age;
  float bp;
  };
  struct employee e;

  fp=fopen("Employee.dat","r");

  if(fp== NULL)
  {
    puts("Cannot Open File");
    getche();
    exit(0);
  }
  clrscr();

  while(fscanf(fp,"%s %d %f",e.name,&e.age,&e.bp)!= EOF)
  {
   printf("\n \t%-s \t%-10d \t%-10.2f",e.name,e.age,e.bp);
  }
  fclose(fp);
  getche();
}

Example:12

#include <stdio.h>
main()
{
  FILE *fp;
  char another='y';
  struct employee
  {
  char name[40];
  int age;
  float bp;
  };
  struct employee e1;

  fp=fopen("Emp.dat","w");

  if(fp== NULL)
  {
    puts("Cannot Open File");
    getche();
    exit();
  }

  while(another == 'y')
  {
   printf("\n Enter the name,age,basic pay");
   scanf("%s %d %f",e1.name,&e1.age,&e1.bp);
   fwrite(&e1,sizeof(e1),1,fp);
   printf("\n Another Employee(y/n)");
   fflush(stdin);
   another=getchar();
  }
  fclose(fp);
}

Example:13

#include <stdio.h>
main()
{
  FILE *fp;
  struct employee
  {
  char name[40];
  int age;
  float bp;
  };
  struct employee e;

  fp=fopen("Emp.dat","r");

  if(fp== NULL)
  {
    puts("Cannot Open File");
    getche();
    exit();
  }
  clrscr();

  while(fread(&e,sizeof(e),1,fp))
  {
   printf("\n \t%s \t%d \t%.2f",e.name,e.age,e.bp);
  }                             fseek();
  fclose(fp);
  getche();
}

Example:14

#include <stdio.h>
main()
{
  FILE *fp,*ft;
  char choice;
  char another,empname[20];
  int pos,s;

  struct employee
  {
  char name[40];
  int age;
  float bp;
  };
  struct employee e;
  fp=fopen("mydata.dat","rb+");
  if(fp== NULL)
  {
   fp=fopen("mydata.dat","wb+");
  }



  while(1)
  {
   clrscr();
   printf("\n 1. Adding Records");
   printf("\n 2. List   Records");
   printf("\n 3. Modify Records");
   printf("\n 4. Delete Records");
   printf("\n 5. Exit");

   gotoxy(5,15);
   printf("Enter the choice : ");
   choice=getchar();

   switch(choice)
   {
     case '1':
		fseek(fp,0,SEEK_END);
		another='y';
		while(another == 'y')
		{
		  printf("\n Enter the name,age and basic salary   :");
		  scanf("%s %d  %f",e.name,&e.age,&e.bp);
		  fwrite(&e,sizeof(e),1,fp);
		  printf("\ n Add another Record(y/n)");
		  fflush(stdin);
		  another=getche();
		}
		break;

     case '2':
		rewind(fp);
		while(fread(&e,sizeof(e),1,fp))
		printf("\n\t%20s  \t%10d  \t%10.2f",e.name,e.age,e.bp);
		break;
     case '3':
	       another='y';
		 fp=fopen("mydata.dat","rb+");
		 s=sizeof(e);
	       while(another=='y')
	       {
		 fseek(fp,0,0);
		 clrscr();
		 printf("\n Enter name of the Employee");
		 scanf("%s",empname);
		 while(!feof(fp))
		 {
		    fread(&e,sizeof(e),1,fp);
		    if(strcmp(e.name,empname)==0)
		    {
		      printf(" %s %d %f",e.name,e.age,e.bp);
		      getch();
		      printf("\n Enter the new name,age,basic pay");
		      scanf("%s %d %f",e.name,&e.age,&e.bp);
		      fseek(fp,-s,1);
		      fwrite(&e,sizeof(e),1,fp);
		      getch();
		      break;
		    }
		 }
		 printf("\n Modify another Record(Y/N)");
		 fflush(stdin);
		 another=getche();
	      }
	      break;
     case '4':
		another='y';
		while(another=='y')
		{
		 printf("\n Enter name of Employee to Delete");
		 scanf("%s",empname);

		 ft=fopen("temp.dat","wb");
		 rewind(fp);
                 while(fread(&e,sizeof(e),1,fp))
		 {
		    if(strcmp(e.name,empname)!=0)
		      fwrite(&e,sizeof(e),1,ft);
		 }
		 fclose(ft);
		 fclose(fp);

		 remove("mydata.dat");
		 rename("temp.dat","mydata.dat");

		 fp=fopen("mydata.dat","rb+");
		 printf("\n Delete another Record(Y/N)");
		 fflush(stdin);
		 another=getche();
	      }
	      break;

     case '5':
		fclose(fp);
		exit();
     }
     getche();
   }

}


Example:14

#include <stdio.h>
main()
{
 FILE *fp;
 char ch;

 fp=fopen("trial","w");
 clrscr();

 while(!feof(fp))
 {
   ch=getc(fp);

   if(ferror(fp))
   {
    perror("trial");
   /* printf("\nError in the file");*/
     break;
   }
   else
     printf("%c",ch);
 }
 fclose(fp);
 }

Example:15

#include<stdio.h>
main(argc,argv)
int argc;
char *argv[];
{
  FILE *fs,*ft;
  char ch;
  clrscr();

  fs=fopen(argv[1],"r");

  if(fs== NULL)
  {
   printf("\n Cannot open the source file %s",argv[1]);
   getche();
   exit();
  }

  ft=fopen(argv[2],"w");
  if(ft == NULL)
  {
   printf("\n Cannot open the destination file %s",argv[2]);
   getche();
   exit();
  }

  while(1)
  {
   ch=getc(fs);

   if(ch == EOF)
     break;
   else
     putc(ch,ft);
  }

fclose (fs);
fclose (ft);
clrscr();
gotoxy(10,15);
printf("\n The copied from %s to %s ",argv[1],argv[2]);
getche();
}

Example:16

#include <stdio.h>
main()
{
  FILE *fp,*ft;
  char choice;
  char another,empname[20];
  int c;
  struct employee
  {
  char name[40];
  int age;
  float bp;
  };
  struct employee e;

  fp=fopen("data.dat","r+");

  if(fp== NULL)
  {
    fp=fopen("employ.dat","w+");
    if(fp==NULL)
    {
      puts("cannot open file");
       exit();
    }
  }


  while(1)
  {
   clrscr();
   printf("\n 1. Adding Records");
   printf("\n 2. List   Records");
   printf("\n 3. Modify Records");
   printf("\n 4. Delete Records");
   printf("\n 5. Exit");

   gotoxy(5,15);
   fflush(stdin);
   choice=getchar();
   c=sizeof(e);
   switch(choice)
   {
     case '1':
		fseek(fp,0,SEEK_END);
		another='y';
		while(another == 'y')
		{
		  printf("\n Enter the name,age and basic salary   :");
		  scanf("%s%d%f",e.name,&e.age,&e.bp);
		  fwrite(&e,sizeof(e),1,fp);
		  printf("\n Add another Record(y/n)");
		  fflush(stdin);
		  another=getche();
		}
		break;

     case '2':
		rewind(fp);
		while(fread(&e,sizeof(e),1,fp)==1)
		printf("\n \t%20s  \t%10d  \t%10.2f",e.name,e.age,e.bp);
		break;
     case '3':
	       another='y';
	       while(another=='y')
	       {
		 clrscr();
		 printf("\n Enter name of the Employee");
		 scanf("%s",empname);
		 rewind(fp);

		 while(fread(&e,sizeof(e),1,fp)==1)
		 {
		    if(strcmp(e.name,empname)==0)
		    {
		      printf("\n Enter the new name,age,basic pay");
		      scanf("%s %d %f",e.name,&e.age,&e.bp);
		      fseek(fp,-c,SEEK_CUR);
		      fwrite(&e,sizeof(e),1,fp);
		      break;
		    }
		 }
		 printf("\n Modify another Record(Y/N)");
		 fflush(stdin);
		 another=getche();
	      }
	      break;
     case '4':
		another='y';
		while(another=='y')
		{
		 printf("\n Enter name of Employee to Delete");
		 scanf("%s",empname);

		 ft=fopen("temp.dat","w");
		 rewind(fp);

                 while(fread(&e,sizeof(e),1,fp))
		 {
		    if(strcmp(e.name,empname)!=0)
		      fwrite(&e,sizeof(e),1,ft);
		 }
		 fclose(ft);
		 fclose(fp);

		 remove("Employee.dat");
		 rename("temp.dat","employee.dat");

		 fp=fopen("employee.dat","rb+");
		 printf("\n Delete another Record(Y/N)");
		 fflush(stdin);
		 another=getche();
	      }
	      break;

     case '5':
		fclose(fp);
		exit();
     case '6':
	       fseek(fp,0,SEEK_SET);
	       while(!feof(fp))
		  printf("\n%ld",tell(fp)) ;
		  fseek(fp,sizeof(e),SEEK_CUR);
		 getche();
		 getche();

     }
     getche();
   }

}



