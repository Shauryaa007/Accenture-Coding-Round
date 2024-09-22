// Fibonacci Series using Space Optimized Method 
#include<bits/stdc++.h> 
using namespace std; 

int fib(int n) 
{ 
	int a = 1, b = 1, c, i; 
	if( n == 0||n==1) 
		return 1; 
	for(i = 2; i <= n; i++) 
	{ 
        
	c = (a*a + b*b)%47; //cout<<c<<" ";
	a = b; 
	b = c; 
	} 
	return b%47; 
} 

// Driver code 
int main() 
{ 
	string s1,s2;
    cin>>s1>>s2;
   
    int i=0,j=0;
    
    while(i<s1.length()&&j<s2.length())
    {
        char c1=tolower(s1[i]);
        char c2=tolower(s2[j]);
        if(c1>c2)
        {
            cout<<1;
            return 0;
        }
        else if(c1<c2)
        {
            cout<<-1;
            return 0;
        }
        
        i++;
        j++;
    }
    
	return 0; 
} 
