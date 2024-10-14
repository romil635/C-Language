#include<stdio.h>

int maths,sci,english,total;
float per;
int marksheet()
{
  total =maths+sci+english;
  return total;
  per =total*100/300;
  return per;
}

int main()
{    
    printf("enter marks 1: ");
    scanf("%d",&maths);
    printf("enter marks 2: ");
    scanf("%d",&sci);
    printf("enter marks 3: ");
    scanf("%d",&english);

    total=maths+sci+english;
    printf("total: %d",total);

    per=total*100/300;
    printf("per: %f",per);

    marksheet();
}