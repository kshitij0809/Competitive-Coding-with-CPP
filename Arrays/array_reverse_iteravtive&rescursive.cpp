//ITERVATIVE

// Iterative C++ program to reverse an array 
#include <bits/stdc++.h> 
using namespace std; 

/* Function to reverse arr[] from start to end*/
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

/* Utility function to print an array */
void printArray(int arr[], int size) 
{ 
for (int i = 0; i < size; i++) 
cout << arr[i] << " "; 

cout << endl; 
} 

/* Driver function to test above functions */
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	
	// To print original array 
	printArray(arr, 6); 
	
	// Function calling 
	rvereseArray(arr, 0, 5); 
	
	cout << "Reversed array is" << endl; 
	
	// To print the Reversed array 
	printArray(arr, 6); 
	
	return 0; 
} 


// RECURSIVE


/*
1)make a condition to terminate a function call ( base case )

2)make a condition analogous to iterative approach to run fuction call               
*/

// Iterative C++ program to reverse an array 
#include <bits/stdc++.h> 
using namespace std; 

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end) 
{ 
	while (start < end) 
	{ 
		int temp = arr[start]; 
		arr[start] = arr[end]; 
		arr[end] = temp; 
		
	} 
	rvereseArray(arr,start+1,end-1);
}	 

/* Utility function to print an array */
void printArray(int arr[], int size) 
{ 
for (int i = 0; i < size; i++) 
cout << arr[i] << " "; 

cout << endl; 
} 

/* Driver function to test above functions */
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	
	// To print original array 
	printArray(arr, 6); 
	
	// Function calling 
	rvereseArray(arr, 0, 5); 
	
	cout << "Reversed array is" << endl; 
	
	// To print the Reversed array 
	printArray(arr, 6); 
	
	return 0; 
} 
