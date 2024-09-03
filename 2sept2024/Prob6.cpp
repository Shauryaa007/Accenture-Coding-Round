//even odd labels

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    
    string ans="";
    
    for(int i=0;i<n;i++)
    {
        if(A[i]%2==0)ans+="even";
        else ans+="odd";
    }
    
    cout<<ans;
    
    return 0;
    
}