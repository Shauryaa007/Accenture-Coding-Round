#include <iostream>
#include <vector>

using namespace std;

int solve(int n,int arr[])
{
    if(n==0)return 0;
    if(n==1)return arr[0];
    
    int xorr=arr[1];
    int sum=arr[0];
    
    for(int i=2;i<n;i++)
    {
        if(i%2==0)sum+=arr[i];
        else xorr=xorr^arr[i];
    }
    
    return sum+xorr;
}
   
int main() {
    int n;;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<solve(n,arr);
    return 0;
}
