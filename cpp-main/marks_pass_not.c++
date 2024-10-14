#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,total;
    float per;
    cout<<"marks s1:";
    cin>>s1;
    cout<<"marks s2:";
    cin>>s2;
    cout<<"marks s3:";
    cin>>s3;

    total=s1+s2+s3;
    cout<<"total:"<<total;

    per=total*100/300;
    cout<<"per:"<<per;
    
    if(s1>=35 || s2>=35 || s3>=35)
    {
        cout<<"pass..."<<"\n";
    }
    else
    {
       cout<<"fail...";
    }
}