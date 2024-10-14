#include<iostream>
using namespace std;
int main()
{
    int maths,sci,gujrati,total;
    float per;

    cout<<"enter marks maths:";
    cin>>maths;
    
    cout<<"enter marks sci:";
    cin>>sci;

    cout<<"enter marks gujrati:";
    cin>>gujrati;

    total =maths+sci+gujrati;
    cout<<"total marks:"<<total;

    per=total/3;
    cout<<"\nper:"<<per;
}
