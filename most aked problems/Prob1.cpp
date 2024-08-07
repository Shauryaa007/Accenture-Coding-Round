#include<bits/stdc++.h>
using namespace std;

int CheckPassword (char str[], int n)
{
  //At least 4 characters
  if (n < 4) return 0;
    
  //Starting character must not be a number
  if (str[0] - '0' >= 0 && str[0] - '0' <= 9) return 0;
    
  int a = 0, cap = 0, nu = 0;
  for(int i=0;i<n;i++)
    {
      //Must not have space or slash (/)
      if (str[i] == ' ' || str[i] == '/') return 0;
      
      //counting capital letters
      if (str[i] >= 65 && str[i] <= 90) cap++;
	
      //counting numeric digit
      else if (str[i] - '0' >= 0 && str[i] - '0' <= 9) nu++;
      
    }
    
  // returns 1 if there are > 0 numeric digits and capital letters
  return cap > 0 && nu > 0;
}
int main ()
{
  string s;
  getline (cin, s);
  int len = s.size ();
  char *c = &s[0];
  cout << CheckPassword (c, len);
}