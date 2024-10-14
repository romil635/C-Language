#include<iostream>
using namespace std;
int main()
{
    int g[5],e[5],m[5],total;
    float per;
    for(int i=0; i<=5; i++)
     {
        cout<<"enter marks 1:";
        cin>>g[i];
        cout<<"enter marks 2:";
        cin>>e[i];
        cout<<"enter marks 3:";
        cin>>m[i];

        total=g[i]+e[i]+m[i];
        cout<<"total:"<<total<<"\n";

        per=total*100/300;
        cout<<"per:"<<per<<"\n";

        if(per<=35)
        {
            cout<<"grade is : fail"<<"\n";
        }
        else if(per<=50)
        {
            cout<<"grade is : D"<<"\n";
        }
        else if(per<=70)
        {
            cout<<"grade is : C"<<"\n";
        }
        else if(per<=80)
        {
            cout<<"grade is : B"<<"\n";
        }
        else
        {
           cout<<"grade is : A"<<"\n";
        }
     }
}