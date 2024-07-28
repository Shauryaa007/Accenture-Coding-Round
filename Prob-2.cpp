// Single digit

#include<iostream>11
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>9)
    {
        if(n%2==0)
        {
            n=floor((n-2)/2.0);
        }
        else
        {
            n=floor(n/2.0);
        }
    }

    cout<<n;
    return 0;
}