#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';

    }

string solve(string s)
{
    int n=s.length();
    string ans="";
    ans+=s[0];
    
    for(int i=1;i<n-1;i++)
    {
        if(isVowel(s[i]) && !isVowel(s[i-1]) && !isVowel(s[i+1]))
            continue;
        else 
            ans+=s[i];
    }
    ans+=s[n-1];
    
    return ans;
}
int main() {
    string s;
    cin>>s;
    
    cout<<solve(s);
}
