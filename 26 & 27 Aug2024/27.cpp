#include<bits/stdc++.h>
using namespace std;
int solve(string str)
{
    int count=0;
    int score=0;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='H')
        {
            score+=2;
            count++;
        }
        else if(str[i]=='T')
        {
            score-=1;
            count=0;
        }
        
        if(count==3)return score;
    }
    
    return score;
}
int main() {

    string s;
    cin>>s;
    
    cout<<solve(s);
    return 0;
}