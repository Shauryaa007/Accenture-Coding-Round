#include<bits/stdc++.h>
using namespace std;

 auto comp = [] (int a, int b) {
        return a > b;
    };

void solve(int n, vector<int>arr,int target)
{
    vector<int>ans(2,0);
    int prod=0;
    
    sort(arr.begin(),arr.end(),comp);
    int st=0,end=n-1;
    while(st<end)
    {
        int sum=arr[st]+arr[end];
        
        if(sum==target)
        {
            if(prod<arr[st]*arr[end])
            {
                prod=arr[st]*arr[end];
                ans[0]=arr[st];
                ans[1]=arr[end];
            }
            st++;
            end--;
        }
        else if(sum<target)end--;
        else st++;
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    solve(n,arr,target);
    return 0;
}