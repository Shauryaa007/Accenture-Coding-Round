// count minimum right flips

#include <iostream>
#include <string>

using namespace std;

int solve(int n,int A[]) 
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count%2==0)
        {
            if(A[i]==0)count++;
        }
        else
        {
            if(A[i]==1)count++;
        }
    }
    
    return count;
    
}

// Driver program
int main() {
    int n;
    cin>>n;
    
    int A[n];
    
    for(int i=0;i<n;i++)cin>>A[i];
    
    cout<<solve(n,A);
    
    return 0;
}
