#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin>>d>>n;
    
    int N=0,s1=0,s2=0;
    
    int flag=0;
    while(n)
    {
        if(flag==0)s1+=n%10;
        else s2+=n%10;
        
        n/=10;
        N++;
        flag=!flag;
    }
    int even,odd;
    
    if(N%2)
    {
        even=s1;
        odd=s2;
    }
    else
    {
        even=s2;
        odd=s1;
    }
    
    if(d%2)cout<<even;
    else cout<<odd;
    
    return 0;
}
