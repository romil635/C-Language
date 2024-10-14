#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter number:";
    cin>>no;

    if(no==0)
    {
        cout<<"number zero";
    }
    else if (no<1)
    {
        cout<<"number is negative";
    }
    else
    {
        cout<<"number id positive";
    }
    
}