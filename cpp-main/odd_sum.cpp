#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"enter n:";
    cin>>n;

    for(a=0; a<=n; a++)
    {
      if(a%2==0)
      {
        cout<<a<<" ";
      }
    }
}