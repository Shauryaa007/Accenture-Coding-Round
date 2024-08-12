// find first k words

#include <iostream>
#include <string>

using namespace std;

string solve(string s,int k) {
    
    int n=s.length();
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            c++;
            if(c==k) return s.substr(0,i);
        }
    }
    return "";
}

// Driver program
int main() {
    string s;
    getline(cin, s);
    int k;
    cin>>k;
    
    cout<<solve(s,k);
    
    return 0;
}
