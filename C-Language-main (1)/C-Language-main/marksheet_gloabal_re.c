#include<stdio.h>

void total_per(int marks[],int sum)
{
    int total,i;
    float per;

    for(i=0; i<3; i++)
    {
        sum+=marks[i];
    }
    printf("total marks: %d \n",sum);

    total =sum;
    per=total/3;
    printf("per: %f \n",per);
}


int main()
{
    int student[3],marks[3],i,j,sum=0;

    for(i=0; i<3; i++)
    {
        printf("student[%d]:\n",i+1);
        for(j=0; j<3; j++)
        {
            printf("enter marks: ");
            scanf("%d",&marks[j]);
        }
        total_per(marks,sum);
    }
    return 0;
}