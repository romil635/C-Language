#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    a=b*a;
    b=a/b;
    a=a/b;

    cout<<"a:"<<a<<"\n";
    cout<<"b:"<<b;
}