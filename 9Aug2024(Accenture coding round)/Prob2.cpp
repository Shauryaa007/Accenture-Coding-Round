// string concat

#include <iostream>
#include <string>

using namespace std;

string solve(int n, string s) {
    
    string ans="";
    
    while(n--)
    {
        ans+=s;
    }
    
    return ans;
}

// Driver program
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    cout<<solve(n,s);
    
    return 0;
}
