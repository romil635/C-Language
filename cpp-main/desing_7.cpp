#include<iostream>
using namespace std;
int main()
{
    int a,b,c=65,d=1;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
            if(d%2==0)
            {
                cout<<(char)(c+32);
            }
            else
            {
                cout<<(char)c;
            }
            c++;
        }
        d++;
        cout<<"\n";
    }
}
