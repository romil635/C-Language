#include<stdio.h>
int add(int n)
{
 int i,sum=0;

 printf("divisors is:%d \n",n);

 for(i=1; i<n; i++)
 {
   if(n%i==0)
     {
       printf("%d \t",i);
       sum+=i;
     }
  }
if(sum==n)
printf("\n perfect number");

else
printf("\n not perfect number");

}

int main()
{
 int n;
 printf("enter a number:");
 scanf("%d",&n);
 add(n);
}
