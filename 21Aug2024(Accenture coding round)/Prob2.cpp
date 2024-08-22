//decimal to binary

#include<bits/stdc++.h>
using namespace std;

string solve(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans =  ( (n % 2 ) == 0 ? "0" : "1") +ans;
        n = n / 2;
    }
    return ans;
}

int main ()
{
    int N;
    cin>>N;
    
    cout<<solve(N);
    
    return 0;
    
}
