#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int sum=0;
    int c=0;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]%6==0)
        {
            sum+=arr[i];
            c++;
        }
        
    }
    cout<<sum/c;
    
    return 0;
}
