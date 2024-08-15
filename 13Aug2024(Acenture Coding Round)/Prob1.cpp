// Negative growth


#include <iostream>

// Driver program
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    int count=0;
    
    if(n<=1)
    {
        cout<<0;
        return 0;
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(A[i]>A[i+1])count++;
    }
    cout<<count;
    
    return 0;
}
