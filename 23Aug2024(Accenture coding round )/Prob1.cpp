//interchange chars

#include <iostream>
#include <vector>

using namespace std;

string solve(string str, char ch1,char ch2) {
    
    int n=str.length();
    
    for(int i=0;i<n;i++)
    {
        if(str[i]==ch1)str[i]=ch2;
        else if(str[i]==ch2)str[i]=ch1;
    }
    
    return str;
    
}

int main() {
    string s;
    cin>>s;
    char ch1,ch2;
    cin>>ch1>>ch2;
    cout<<solve(s,ch1,ch2);
    return 0;
}
