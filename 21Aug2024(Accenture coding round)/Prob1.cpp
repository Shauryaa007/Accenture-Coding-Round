// Nth fibonacci number
#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n==0||n==1)return n;
    int pre1=1,pre2=0;
    
    for(int i=2;i<=n;i++)
    {
        int curr=pre1+pre2;
        pre2=pre1;
        pre1=curr;
    }
    return pre1;
}

int main() 
{
    int n;
    cin>>n;
    
    cout<<solve(n);
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n==0||n==1)return n;
    int pre1=1,pre2=0;
    
    for(int i=2;i<=n;i++)
    {
        int curr=pre1+pre2;
        pre2=pre1;
        pre1=curr;
    }
    return pre1;
}

int main() 
{
    int n;
    cin>>n;
    
    cout<<solve(n);
    
    return 0;
}
