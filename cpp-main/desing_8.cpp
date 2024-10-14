#include<iostream>
using namespace std;
int main()
{
    int a,b,c=65;
    for(a=1; a>=5; a++)
     {
        for(b=1; b<=1; b++)
        {
            if(b%2==1)
            {
                cout<<c+32;
            }
            else
            {
                cout<<c;
            }
            c++;
        }
        cout<<"\n";
     }
}