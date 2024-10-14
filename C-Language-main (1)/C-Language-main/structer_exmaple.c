#include<stdio.h>

struct studentdata
{
    int rollno,m,s,g,total;
    char name[50];
    float per;
};

int main()
{
    struct studentdata s_data[3];

    for(int i=0; i<3; i++)
    {
        printf("enter roll number:");
        scanf("%d",&s_data[i].rollno);
        
        printf("enter name:");
        scanf("%s",&s_data[i].name);
        
        printf("enter marks maths:");
        scanf("%d",&s_data[i].m);
        
        printf("enter marks sci:");
        scanf("%d",&s_data[i].s);
 
        printf("enter marks gujarati:");
        scanf("%d",&s_data[i].g);

        s_data[i].total =s_data[i].m+s_data[i].s+s_data[i].g;

        s_data[i].per =(s_data[i].total*100)/300;

    }

    printf("\n\tR.no\tname\tm.m\ts.m\tg.m\ttotal\tper\n");

    for(int i=0; i<3; i++)
    {
        printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%f\n",s_data[i].rollno,s_data[i].name,s_data[i].m,s_data[i].s,s_data[i].g,s_data[i].total,s_data[i].per);

    }

}

/*

student[1]:
enter marks: 85
enter marks: 96
enter marks: 74
total marks: 255 
per: 85.000000 
student[2]:
enter marks: 96
enter marks: 85
enter marks: 36
total marks: 217 
per: 72.000000 
student[3]:
enter marks: 96
enter marks: 96
enter marks: 99
total marks: 291 
per: 97.000000

*/