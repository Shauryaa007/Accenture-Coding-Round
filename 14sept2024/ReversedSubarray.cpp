// C++ program to check whether reversing a 
// sub array make the array sorted or not 
#include<bits/stdc++.h> 
using namespace std; 

// Return true, if reversing the subarray will 
// sort the array, else return false. 
bool checkReverse(int arr[], int n) 
{ 
	// Copying the array. 
	int temp[n]; 
	for (int i = 0; i < n; i++) 
		temp[i] = arr[i]; 

	// Sort the copied array. 
	sort(temp, temp + n); 

	// Finding the first mismatch. 
	int front; 
	for (front = 0; front < n; front++) 
		if (temp[front] != arr[front]) 
			break; 

	// Finding the last mismatch. 
	int back; 
	for (back = n - 1; back >= 0; back--) 
		if (temp[back] != arr[back]) 
			break; 

	// If whole array is sorted 
	if (front >= back) 
		return true; 

	// Checking subarray is decreasing or not. 
	do
	{ 
		front++; 
		if (arr[front - 1] < arr[front]) 
			return false; 
	} while (front != back); 

	return true; 
} 

// Driver Program 
int main() 
{ 
	int arr[] = { 1, 2, 5, 4, 3 }; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	checkReverse(arr, n)? (cout << "Yes" << endl): 
						(cout << "No" << endl); 
	return 0; 
} 
