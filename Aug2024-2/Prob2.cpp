#include <iostream>
#include <vector>

using namespace std;

int solve(int a,int b)
{
    return ceil(sqrt(a*a+b*b));
}

int main() {
    int n;;
    cin>>n;
    int a,b;
    while(n--)
    {
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}
