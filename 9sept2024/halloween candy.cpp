#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>candy, int h)
{
    int low=1;
    int high=*max_element(candy.begin(),candy.end());
    
    int c;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        int rh=0;
        
        for(int i=0;i<n;i++)
        {
            rh+= candy[i]/mid + (candy[i]%mid!=0);
        }
        
        if(rh>h)
        {
            low=mid+1;
        }
        else // valid ans
        {
            c=mid;
            high=mid-1; // in search of lesser c value;
        }
    }
    
    return c;
}

int main()
{
    int n;
    cin>>n;
    vector<int>candy(n);
    for(int i=0;i<n;i++)cin>>candy[i];
    int h;
    cin>>h;
    
    cout<<solve(n,candy,h);
    return 0;
}