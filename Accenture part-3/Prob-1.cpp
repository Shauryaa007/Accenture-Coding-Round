#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string str)
{
    int n=str.length();
    int i=0;
    int j=n-1;
    
    while(i<j)
    {
        if(str[i]!=str[j])return "false";
        
        i++;
        j--;
    }
    
    return "true";
}

int main()
{
    string str;
    cin>>str;
    
    cout<<isPalindrome(str);
    return 0;
}