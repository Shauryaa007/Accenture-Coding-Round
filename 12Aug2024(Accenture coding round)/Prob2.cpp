// Sum of primes

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N) {

    for (int i = 2; i <=sqrt(N); i++) {

        if (N % i == 0) {
            return false;
        }
    }
    return true;
}
int main ()
{
    int n;
    cin>>n;
    
    if(n<2)
    {
        cout<<0;
        return 0;
    }
    
    int sum=0;
    
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            sum+=i;
        }
    }
    
    cout<<sum;
  
}