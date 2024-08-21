// googly prime

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N) {
  
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

string solve(int N)
{
    int sum=0;
    while(N)
    {
        sum+=N%10;
        N=N/10;
    }
    if(isPrime(sum)) return "YES";
    
    return "NO";
}

int main ()
{
    int N;
    cin>>N;
    
    cout<<solve(N);
    
    return 0;
    
}

