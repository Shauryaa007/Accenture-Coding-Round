// String decode.
#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    string ans="";
    
    int n=s.length();
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')count++;
        else
        {
            ans+= 'A'+count-1;
            count=0;
        }
    }
    ans+= 'A'+count-1;
    return ans;
}

int main() 
{
    string s;
    cin>>s;
    
    cout<<solve(s);
    
    return 0;
}
