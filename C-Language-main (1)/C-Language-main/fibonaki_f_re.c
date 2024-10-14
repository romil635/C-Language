#include<stdio.h>

int fibonacci(int a,int b,int n)
{
 int sum;

    if(n!=0)
    {
        sum=a+b;
        a=b;
        b=sum;

        n--;
        return fibonacci(a,b,n);
       
    }
}

int main()
{
    int n,i,b=0,a=1;

    printf("enter value:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d ",fibonacci(a,b,i));
    }
    return 0;
}

/*output: enter value:8
0  1  1  2  5  8  13*/