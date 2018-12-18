/*
Program for array rotation
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
Array

Rotation of the above array by 2 will make array

ArrayRotation1

*/


// C++ program to rotate an array by 
// d elements 
#include <bits/stdc++.h> 
using namespace std; 

/*Fuction to get gcd of a and b*/
int gcd(int a, int b) 
{ 
	if (b == 0) 
		return a; 

	else
		return gcd(b, a % b); 
} 

/*Function to left rotate arr[] of siz n by d*/
void leftRotate(int arr[], int d, int n) 
{ 
	for (int i = 0; i < gcd(d, n); i++) { 
		/* move i-th values of blocks */
		int temp = arr[i]; 
		int j = i; 

		while (1) { 
			int k = j + d; 
			if (k >= n) 
				k = k - n; 

			if (k == i) 
				break; 

			arr[j] = arr[k]; 
			j = k; 
		} 
		arr[j] = temp; 
	} 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
} 

/* Driver program to test above functions */
int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// Function calling 
	leftRotate(arr, 2, n); 
	printArray(arr, n); 

	return 0; 
} 




// SIMPLE APPROACH

/*
Program for array rotation
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
Array

Rotation of the above array by 2 will make array

ArrayRotation1

*/


// C++ program to rotate an array by 
// d elements 
#include <bits/stdc++.h> 
using namespace std; 

// C++ program for reversal algorithm 
// of array rotation 
#include <bits/stdc++.h> 
using namespace std; 

/*Function to reverse arr[] from index start to end*/
void rvereseArray(int arr[], int start, int end) 
{ 
	while (start < end) 
	{ 
		int temp = arr[start]; 
		arr[start] = arr[end]; 
		arr[end] = temp; 
		start++; 
		end--; 
	} 
} 

/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n) 
{ 
	rvereseArray(arr, 0, d-1); 
	rvereseArray(arr, d, n-1); 
	rvereseArray(arr, 0, n-1); 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
	cout << arr[i] << " "; 
} 

/* Driver program to test above functions */
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int d = 2; 
	
	// Function calling 
	leftRotate(arr, d, n); 
	printArray(arr, n); 
	
	return 0; 
} 
