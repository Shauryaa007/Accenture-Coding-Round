// count second largest ele.

#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n)
{
    int count=0;
    int idx=n-1;

    while(idx>=0 && arr[idx]==arr[n-1])idx--; // skip lar
        
    if(idx<0)return 0;
    else
    {
        int temp=arr[idx];
        while(arr[idx]==temp)
        {
            count++;
            idx--;
        }
    }
    
    return count;
}

int main() {

    int n ;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<solve(arr,n);
    return 0;
}