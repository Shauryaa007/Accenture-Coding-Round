// permutation

#include <bits/stdc++.h>

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
    mp['A']++;
    mp['E']++;
    mp['I']++;
    mp['O']++;
    mp['U']++;
    mp['a']++;
    mp['e']++;
    mp['i']++;
    mp['o']++;
    mp['u']++;
    
   int count=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(mp.find(s[i])==mp.end())count++;

    }
    
    if(count==0)
    {
        cout<<0;
        return 0;
    }
    cout<<fact(count);
    return 0;
    
    
}
