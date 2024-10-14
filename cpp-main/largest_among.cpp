#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"\n"<<"a is big:"<<a;
        }
        else
        {
            cout<<"\n"<<"c is big:"<<b;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"\n"<<"b is big :"<<b;
        }
        else
        {
            cout<<"\n"<<"c is big :"<<c;
        }
    }

    
}