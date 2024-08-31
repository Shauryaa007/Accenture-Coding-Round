#include <bits/stdc++.h>
using namespace std;

int solve(int n, string s)
{
    string A="",B="";
    
    string word="";
    
    bool flag=0;
    
    for(int i=0;i<s.length();i++)
    {
        word+=s[i];
        
        if(word=="snake")
        {
            if(flag) B+="s";
            else A+="s";
            
            flag=!flag;
            word="";
        }
        else if(word=="water")
        {
            if(flag) B+="w";
            else A+="w";
            
            flag=!flag;
            word="";
        }
        else if(word=="gun")
        {
            if(flag) B+="g";
            else A+="g";
            
            flag=!flag;
            word="";
        }
    }
    cout<<A<<endl<<B<<endl;
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        if(B[i]=='s' && A[i]=='g' || B[i]=='w' && A[i]=='s' || B[i]=='g'&& A[i]=='w')c++;
    }
    return c;
    
}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    cout<<solve(n,s);

    return 0;
}
