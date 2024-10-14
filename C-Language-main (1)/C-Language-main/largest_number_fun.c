#include<stdio.h>

int largest()
{
 int a,b,c;
 printf("enter value 1:");
 scanf("%d",&a);
 printf("enter value 2:");
 scanf("%d",&b);
 printf("enter value 3:");
 scanf("%d",&c);

 
if(a>b)
 {
  if(a>c)
   {
    printf("1 is largest: %d",a);
   }
  else
 {
   printf("3 is largest: %d",c);
 }
}
 
else
{
 if(b>c)
   {
    printf("2 is largest: %d",b);
   }
 else
  {
 printf("3 is largest: %d",c);
   }
}

}

int main()
{
  largest();
}