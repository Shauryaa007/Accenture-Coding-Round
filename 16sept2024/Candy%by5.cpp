// permutation

#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>&candy,int m)
{
    sort(candy.begin(),candy.end());
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(candy[i]%5==0)count++;
        else if(candy[i]<=m)
        {
            count++;
            m-=candy[i];
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    
    vector<int>candy(n);
    for(int i=0;i<n;i++)cin>>candy[i];
    
    int m;
    cin>>m;
    
    cout<<solve(n,candy,m);
    
    return 0;
    
}
