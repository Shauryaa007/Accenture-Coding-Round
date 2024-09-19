#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>&arr, int k)
{
    int sum1=0;
    int sum2=0;
    
    for(int i=0;i<n;i++)
    {
        if(i<k)sum1+=arr[i];
        if(n-i-1>k)sum2+=arr[n-i-1];
    }
    cout<<sum1<<" "<<sum2;
    
    return abs(sum1-sum2);
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<solve(n,arr,k);
    
    return 0;
}
