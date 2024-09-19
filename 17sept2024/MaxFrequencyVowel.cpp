// permutation

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}

int main() {
    string s;
    cin>>s;
    
    unordered_map<char,int>mp;
    
    for(int i=0;i<s.length();i++)
    {
        if(isVowel(s[i]))
        {
            mp[s[i]]++;
        }
    }
    
    for(auto it:mp)
    {
        cout<<it.first<<"-"<<it.second<<endl;
    }
    
    return 0;
    
}
