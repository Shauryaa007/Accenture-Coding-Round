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
	int n; 
    cin>>n;
	
	cout << fib(n); 
	return 0; 
} 
