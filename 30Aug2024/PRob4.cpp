// even odd sum

#include <iostream>
#include <vector>

using namespace std;

void solve(int n,int arr[n])
{
    int even=0,odd=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)even+=arr[i];
        else odd+=arr[i];
    }
    
    cout<<even<<" "<<odd;
}

int main() {
    int n;;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    solve(n,arr);
    return 0;
}
