/*
Equilibrium index of an array
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. For example, in an array A:

Example :

Input : A[] = {-7, 1, 5, 2, -4, 3, 0}
Output : 3
3 is an equilibrium index, because:
A[0] + A[1] + A[2]  =  A[4] + A[5] + A[6]
*/

// C program to find equilibrium 
// index of an array 

#include <stdio.h> 

int equilibrium(int arr[], int n) 
{ 
	int sum = 0; // initialize sum of whole array 
	int leftsum = 0; // initialize leftsum 

	/* Find sum of the whole array */
	for (int i = 0; i < n; ++i) 
		sum += arr[i]; 

	for (int i = 0; i < n; ++i) { 
		sum -= arr[i]; // sum is now right sum for index i 

		if (leftsum == sum) 
			return i; 

		leftsum += arr[i]; 
	} 

	/* If no equilibrium index found, then return 0 */
	return -1; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 }; 
	int arr_size = sizeof(arr) / sizeof(arr[0]); 
	printf("First equilibrium index is %d", 
				equilibrium(arr, arr_size)); 

	getchar(); 
	return 0; 
} 
