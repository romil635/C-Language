#include<stdio.h>

int a[100],i,n,sum=0;
int inc()
{
     for(i=0; i<n; i++)
     {
        sum+=a[i];
     }
    return sum;
}

int main()
    
{
    int ans;

    printf("enter value:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {

     printf("a[%d]:",i);
     scanf("%d",&a[i]);
    }
    
    ans=inc();

    printf("sum : %d",ans);
}