#include<stdio.h>
int pn()
{

  int a;
  printf("enter value:");
  scanf("%d",&a);

  if(a>0)
   { 
       return 1 ;
   }
   else
    {
       return 0;
    }
}

void main()
{

 int a;
  a=pn();
  printf("ans:%d",a);
 }