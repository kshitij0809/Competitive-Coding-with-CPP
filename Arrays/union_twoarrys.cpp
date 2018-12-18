/*

Union and Intersection of two sorted arrays
Given two sorted arrays, find their union and intersection.

Example:

Input : arr1[] = {1, 3, 4, 5, 7}
        arr2[] = {2, 3, 5, 6} 
Output : Union : {1, 2, 3, 4, 5, 6, 7} 
         Intersection : {3, 5}

Input : arr1[] = {2, 5, 6}
        arr2[] = {4, 6, 8, 10} 
Output : Union : {2, 4, 5, 6, 8, 10} 
         Intersection : {6}



*/

//HANDEL THE DUPLICATES WITH HASHTABLE 

// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

/* Function prints union of arr1[] and arr2[] 
m is the number of elements in arr1[] 
n is the number of elements in arr2[] */
int printUnion(int arr1[], int arr2[], int m, int n) 
{ 
int i = 0, j = 0; 
while (i < m && j < n) 
{ 
	if (arr1[i] < arr2[j]) 
	cout << arr1[i++] << " "; 
	
	else if (arr2[j] < arr1[i]) 
	cout << arr2[j++] << " "; 
	
	else
	{ 
	cout << arr2[j++] << " "; 
	i++; 
	} 
} 

/* Print remaining elements of the larger array */
while(i < m) 
	cout << arr1[i++] << " "; 

while(j < n) 
	cout << arr2[j++] << " "; 
} 

/* Driver program to test above function */
int main() 
{ 
int arr1[] = {1, 2, 4, 5, 6}; 
int arr2[] = {2, 3, 5, 7}; 
	
int m = sizeof(arr1)/sizeof(arr1[0]); 
int n = sizeof(arr2)/sizeof(arr2[0]); 
	
// Function calling 
printUnion(arr1, arr2, m, n); 

return 0; 
} 
