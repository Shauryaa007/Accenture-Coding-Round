// permutation

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';

    }

int fact(int n)
{
    if(n==0||n==1) return 1;
    int ans=1;
    while(n>0)
    {
        ans*=n--;
    }
    return ans;
}
int main() {
    string s;
    cin>>s;
    
    unordered_map<char,int>mp;
   int count=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(!isVowel(s[i]))
        {
            count++;
            mp[s[i]]++;
        }

    }
    if(count==0)
    {
        cout<<0;
        return 0;
    }
    
    int deno=1;
    
    for(auto it:mp)
    {
        deno*=fact(it.second);
    }
        
    cout<<fact(count)/deno;
    return 0;
    
    
}
