
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int>task(m);
    long long ans=0;
    int curr=1;
    for(int i=0;i<m;i++)
    {
        cin>>task[i];
        int diff=task[i]-curr;
        
        ans+=diff;
        if(diff<0)ans+=n;
        
        curr=task[i];
    }
    
    cout<<ans;
    return 0;
}
