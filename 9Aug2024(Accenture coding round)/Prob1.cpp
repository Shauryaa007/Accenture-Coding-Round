// Peak element

#include <iostream>
#include <string>

using namespace std;

int solve(int n, vector<int>arr) {
    if(n==0)return -1;
    if(n==1)return arr[0];
    
    if(arr[0]>arr[1])return arr[1];
    if(arr[n-1]>arr[n-2])return arr[n-1];
    
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])return arr[i];
    }
    return -1;
}

// Driver program
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<solve(n,arr);
    
    return 0;
}
