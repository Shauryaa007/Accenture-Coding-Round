
#include <iostream>
#include <vector>
using namespace std;

int solve(string s,string t)
{
    int n=s.length();
    int idx=0;
    
    for(int i=0;i<t.size();i++)
    {
        if(t[i]==s[idx])idx++;
    }
    
    return idx+1;
}

int main() {
    string s,t;
    cin>>s>>t;
    cout<<solve(s,t);
    return 0;
}
