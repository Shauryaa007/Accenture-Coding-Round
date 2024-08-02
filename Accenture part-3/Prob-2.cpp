#include<bits/stdc++.h>
using namespace std;

    string longestPalindrome(string s) 
    {
       int n=s.length();
       if(n<=1)return s;
       int st=0;
        int max_len=1;
        
        //odd
        
        for(int i=0;i<n;i++)
        {
            int l=i,r=i;
            
            while(l>=0&&r<n)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            
            int len=r-l-1;
            if(max_len<len)
            {
                max_len=len;
                st=l+1;
            }
        }
        
        
        //even
        
        for(int i=0;i<n-1;i++)
        {
            int l=i,r=i+1;
            
            while(l>=0&&r<n)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            
            int len=r-l-1;
            if(max_len<len)
            {
                max_len=len;
                st=l+1;
            }
        }
        
        return s.substr(st,max_len);
        
    }
int main()
{
    string str;
    cin>>str;
    
    cout<<longestPalindrome(str);
    return 0;
}