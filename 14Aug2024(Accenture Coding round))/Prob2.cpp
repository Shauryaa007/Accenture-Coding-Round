// equilibrium

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int A[n];
    int pre[n];
    int suf[n];
    for(int i=0;i<n;i++)cin>>A[i];
    
    pre[0]=A[0];
    suf[n-1]=A[n-1];
    
    for(int i=1;i<n;i++)
    {
        pre[i]=A[i]+pre[i-1];
        suf[n-i-1]=A[n-i-1]+suf[n-i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(pre[i]==suf[i])
        {
            cout<<i;
            return 0;
        }
    }
    
    cout<<-1;
    
    return 0;
    
}