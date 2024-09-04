// File version

#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<string>arr)
{
    int maxVer=-1;
    for(int i=0;i<n;i++)
    {
        string s=arr[i];
        
        if(s.size()>=6 && s.substr(0,5)=="File_")
        {
            int idx=5, ver=0;
            
            bool valid=1;
            
            while(idx<s.size())
            {
                if(s[idx]<=57 && s[idx]>=48)
                {
                    ver=ver*10+(s[idx]-48);
                }
                else
                {
                    valid=0; //invalid
                    break;
                }
                idx++;
            }
            
            if(valid)maxVer=max(maxVer,ver);
        }
    }
    return maxVer;
}

int main() {
    int n;
    cin>>n;
    
    vector<string>arr(n);
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout<<solve(n,arr);

    return 0;
}
