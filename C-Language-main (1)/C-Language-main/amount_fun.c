#include<stdio.h>
int add(int n)
{
 int a[]={25,10,5,2,1};
 int i,p;
 
 for(i=0; i<10; i++)
{
   if(n>=a[i])
    {
        p=n/a[i];
        printf("%d %d \n",a[i],p);
        n=n %a[i];
     }
  }
}


int main()
{
int a[]={25,10,5,2,1};
int i,p,n; 

 printf("enter amount:");
 scanf("%d",&n);
 
 add(n);

}