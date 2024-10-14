#include<stdio.h>

int a[100],max,min,i,n;
int minmax()
{ 
  max= a[0];
  min= a[0];
  for(i=0; i<n; i++)
  {
  if(a[i]<max)
    {
      min=a[i];
    } 
  else if(a[i]>min)
  {
    max=a[i];
  }
  }
   printf("maximumn number: %d ",max);
   printf("minimum number: %d ",min);
   return 0;
}
int main()
{
     printf("enter array:");
     scanf("%d",&n);  
     
for(i=0; i<n; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    minmax(a);
}


