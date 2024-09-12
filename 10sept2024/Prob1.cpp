// permutation

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    char ch;
    cin>>ch
    
    int c=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==ch)c++;
    }
    cout<<c;
    
    return 0;
    
}
