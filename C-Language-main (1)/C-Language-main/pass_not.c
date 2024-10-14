 #  include<stdio.h>
int result()
{
  int s1,s2,s3,total;
  float per;

  printf("enter value 1:");
  scanf("%d",&s1);
  printf("enter value 2:");
  scanf("%d",&s2);
  printf("enter value 3:");
  scanf("%d",&s3);

 total=s1+s2+s3;
 printf("total: %d \n",total);

 per=total*100/300;
 printf("per: %f",per);

 if(s1>=35 && s2>=35 && s3>=35)
 {
   printf("pass..\n");
   return 0;
 } 
else
 {
   printf("fail..\n");
   return 0;
 }

}

int main()
{
  
 result(); 
}