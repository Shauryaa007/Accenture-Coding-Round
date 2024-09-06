#include <iostream>
#include <vector>

using namespace std;

int solve(int n,int arr[])
{
    int count=0;
    int maxCount=0;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])count++;
        else
        {
            maxCount=max(count,maxCount);
            count=0;
        }
    }
    maxCount=max(count,maxCount);
    return maxCount;
}
   
int main() {
    int n;;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<solve(n,arr);
}
