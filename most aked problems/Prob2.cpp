#include<bits/stdc++.h>
using namespace std;
int OperationsBinaryString (string str)
{
    int n=str.length();
  if (n == 0)
    return -1;
  int ans = str[0]-'0';
    for(int i=1;i<n-1;i+=2)
    {
        char op=str[i];
        int b=str[i+1]-'0';
        
        if (op == 'A') ans &= b;
      else if (op == 'B')ans|=b;
        else ans^=b;
        
    }
  
  return ans;
}
int main ()
{
  string s;
  cin>>s;
  cout << OperationsBinaryString (s);
}