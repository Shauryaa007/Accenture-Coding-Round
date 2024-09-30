#include <bits/stdc++.h>
using namespace std;

int solve(int n, int e, int d)
{
    if(n==0)return -1;

    if(e>n) return -1;// This is because we can Buy the at most one box each day
    //And If the Need per day is greater than n then simply return -1;
    if(e==0 || d==0)return 0;
    if(n*6<e*7)return -1;
    if(d<7) return ((d*e)%n==0)? d*e/n : d*e/n +1;
    
    int ans=0;
    
    // complete weeks
    
    int weeks=d/7;
    
    ans+= ((weeks*e*7)% n == 0)? ((weeks*e*7)/n) : ((weeks*e*7)/n)+1 ;
    
    int left = ans*n - weeks*e*7;
    
    // remaining days
    
    int days= d%7;
    
    int req=(days*e-left);
    if(req<=0) return ans;   // This is because if left number of sweets greater than requirement so dont need to buy the more boxes of sweets 
    ans+= (req%n == 0 )? (req/n): (req/n)+1;
    return ans;
    //Thanks
}

int main() {
    int n,e,d;
    cin>>n>>e>>d;
    cout<<solve(n,e,d);
    return 0;
}
