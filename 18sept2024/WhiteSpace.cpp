#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>&arr, int k)
{
    int sum1=0;
    int sum2=0;
    
    for(int i=0;i<n;i++)
    {
        if(i<k)sum1+=arr[i];
        if(n-i-1>k)sum2+=arr[n-i-1];
    }
    cout<<sum1<<" "<<sum2;
    
    return abs(sum1-sum2);
}

int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    
    int c1=0,c2=0;
    
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==' ')c1++;
    }
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]==' ')c2++;
    }
    
    int diff=abs(c1-c2);
    
    if(diff%2)cout<<"Odd"+to_string(diff);
    else cout<<"Even"+to_string(diff);
    
    return 0;
}
