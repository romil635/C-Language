#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int i,*p;
p=&a;

printf("value of A is :%d \n",a);

for(i=0; i<5; i++)
{
   // printf("%d \t %d \n",a[i],&a[i]);
    printf("%d \t %d \n",*(p+i),(p+i));
}
}

