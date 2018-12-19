/*
Find duplicates in O(n) time and O(1) extra space | Set 1
Given an array of n elements which contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.
For example, let n be 7 and array be {1, 2, 3, 1, 3, 6, 6}, the answer should be 1, 3 and 6.


*/


// C++ code to find 
// duplicates in O(n) time 
#include <bits/stdc++.h> 
using namespace std; 

// Function to print duplicates 
void printRepeating(int arr[], int size) 
{ 
int i; 
cout << "The repeating elements are:" << endl; 
for (i = 0; i < size; i++) 
{ 
	if (arr[abs(arr[i])] >= 0) 
	arr[abs(arr[i])] = -arr[abs(arr[i])]; 
	else
	cout << abs(arr[i]) << " "; 
} 
} 

// Driver Code 
int main() 
{ 
	int arr[] = {1, 2, 3, 1, 3, 6, 6}; 
	int arr_size = sizeof(arr)/sizeof(arr[0]); 
	printRepeating(arr, arr_size); 
	return 0; 
} 

// This code is contributed 
// by Akanksha Rai 
