#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>arr)
{
    int lar=INT_MIN;
    int sLar=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
        {
            sLar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar&&arr[i]>sLar)
        {
            sLar=arr[i];
        }
    }
    
    int c=0;
    for(int i=0;i<n;i++)if(arr[i]==sLar)c++;
    return c;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<solve(n,arr);
    return 0;
}