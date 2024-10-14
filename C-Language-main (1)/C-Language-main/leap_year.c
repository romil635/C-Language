#include<stdio.h>
int year()
{
 int a;
 printf("enter year:");
 scanf("%d",&a);

 if(a%400==0)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}

void main()
{
  int a;
    a=year();
    printf("ans: %d",a);
}