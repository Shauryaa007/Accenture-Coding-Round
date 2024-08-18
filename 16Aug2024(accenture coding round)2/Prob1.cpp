//primesum

#include<bits/stdc++.h>
using namespace std;

bool isprime(int N) {
  
    if (N <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(N); i++) 
    {
        if (N % i == 0) {
            return false;
        }
    }

    return true;
}

int solve(int n, int A[])
{
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        if(isprime(i))
        {
            sum+=A[i];
        }
    }
    return sum;
}

int main ()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    
    cout<<solve(n,A);
    
    return 0;
    
}