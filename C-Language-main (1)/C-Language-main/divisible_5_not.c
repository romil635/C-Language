#include<stdio.h>
int ys()
{
  int a;
  printf("enter value:");
  scanf("%d",&a);
 
 if(a%5==0)
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
 a=ys();
 printf("ans:%d",a);
}