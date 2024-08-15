// multiple of three

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int A[n];
    
    for(int i=0;i<n;i++)cin>>A[i];
    
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]%3==0)count++;
    }
    
    cout<<count;
    
    return 0;
    
}