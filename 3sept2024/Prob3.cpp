#include <iostream>
#include <vector>

using namespace std;

int solve(int n,int arr[])
{
    int sum=0;
        
    for(int idx=0;idx<n;idx++)
    {
        int Ridx= n-idx-1;
        if(Ridx%2==0)sum+=arr[idx];
    }
    return sum;
}
   
int main() {
    int n;;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<solve(n,arr);
    return 0;
}
