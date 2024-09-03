#include <iostream>
#include <vector>

using namespace std;

int solve(int n)
{
    int a=1;
    int b=1;
    
    for(int i=2;i<=n;i++)
    {
        int c=(a*a+b*b)%47;
        a=b;
        b=c;
    }
    return b;
}
   
int main() {
    int n;;
    cin>>n;
    
    cout<<solve(n);
    return 0;
}
