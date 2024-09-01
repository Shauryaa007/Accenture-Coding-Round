#include <bits/stdc++.h>
using namespace std;

string solve(string s1, string s2)
{
    int A=0,B=0;
    
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==' ')A++;
    }
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]==' ')B++;
    }
    int diff=abs(A-B);
    
    return (diff%2==0)? "Even:"+ to_string(diff) :"Odd:"+ to_string(diff)  ;
    
}

int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<solve(s1,s2);

    return 0;
}
