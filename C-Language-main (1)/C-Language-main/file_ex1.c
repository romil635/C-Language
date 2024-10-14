#include<stdio.h>
int main()
{
    FILE *fp;

    fp=fopen("skill.txt","w+");

    fprintf(fp,"welcome \n");
    fputs("thank you \n",fp);

    fclose(fp);
    }