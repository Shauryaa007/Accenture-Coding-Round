// C++ code to implement above approach
#include <bits/stdc++.h>
using namespace std;

// Divide number into 2 even parts
bool divNum(int n)
{
	return (n <= 2
				? false
				: (n % 2 == 0
					? true
					: false));
}

// Driven Program
int main()
{
	int n = 8;
	cout << (divNum(n) ? "YES" : "NO")
		<< endl;
	return 0;
}
