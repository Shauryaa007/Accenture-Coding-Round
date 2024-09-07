/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    int A=0,B=0;
    
    for(int i=4;i<s.length();i+=6)
    {
        if(s[i]=='A')A++;
        else B++;
    }
    return (A>B)? "TeamA":"TeamB";
}

int main()
{
    string s;
    getline(cin,s);
    cout<<solve(s);
    return 0;
}