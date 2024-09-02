// pattern

#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    
    solve(n);

    return 0;
}
