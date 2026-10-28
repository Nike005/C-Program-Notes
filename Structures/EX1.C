//Multiple declaration of structure:
/*#include<stdio.h>
#include<conio.h>
void main()
{
 struct address
 {
  char phone[15];
  char city[25];
  int pin;
 };
 struct emp
 {
  char name[25];
  struct address a;
 };
 struct emp e={"sss","234345","bvn",10};
 clrscr();
 printf("\n Name=%s Phone=%s",e.name,e.a.phone);
 printf("\n City=%s pin=%d",e.a.city,e.a.pin);
 getch();
}
   */
   #include<stdio.h>
   #include<conio.h>
   struct virus
   {
    char signature[25];
    char status[20];
    int size;
   }v[3]={"ramya","dolly",1822,
	  "aaa","bbb",232,
	  "ifc","infotech",222};
   void main()
   {
    int i;
    clrscr();
    for(i=0;i<=2;i++)
    {
     printf("\n %s\t%s\t%d",v[i].signature,v[i].status,v[i].size);
    }
    getch();
   }