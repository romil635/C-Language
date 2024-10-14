#include<iostream>
using namespace std;
int main()
{
int i,a=1,n;
cout<<"enter number:";
cin>>n;

for(i=1; i<=n; i++)
{
    n=n*2;
    cout<<n<<"\t";
}
}