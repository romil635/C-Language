#include<stdio.h>

int smallest()
{
  int a,b;
  printf("enter any two number:");
  scanf("%d %d",&a,&b);
  
  if(a<b)
  {
    printf("a is small: %d",a);
  }
 
  else
  {
    printf("b is small: %d",b);
  }

}
int main()
{
  smallest();
}