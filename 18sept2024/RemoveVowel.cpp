// permutation

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0||n==1)return 1;
    
    int ans=1;
    
    for(int i=2;i<=n;i++)
        ans*=i;
    
    return ans;
}

bool isVowel(char ch)
{
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}

int main() {
    int n;
    cin>>n;
    
    vector<string>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int ans=-1;
    
    for(int i=0;i<n;i++)
    {
        string str=arr[i];
        int count=0;
        
        for(int j=0;j<str.length();j++)
        {
            if(!isVowel(str[j]))
            {
                count++;
            }
        }
        
        ans=max(ans,count);
        
    }
    
    cout<<fact(ans);
    
    return 0;
    
}
