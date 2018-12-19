/*
Find the two repeating elements in a given array
You are given an array of n+2 elements. All elements of the array are in range 1 to n. And all elements occur once except two numbers which occur twice. Find the two repeating numbers.
For example, array = {4, 2, 4, 5, 2, 3, 1} and n = 5

The above array has n + 2 = 7 elements with all elements occurring once except 2 and 4 which occur twice. So the output should be 4 2.




*/

// simple approch

#include<stdio.h> 
#include<stdlib.h> 

void printRepeating(int arr[], int size) 
{ 
int *count = (int *)calloc(sizeof(int), (size - 2)); 
int i; 
	
printf(" Repeating elements are "); 
for(i = 0; i < size; i++) 
{ 
	if(count[arr[i]] == 1) 
	printf(" %d ", arr[i]); 
	else
	count[arr[i]]++; 
}	 
}	 

int main() 
{ 
int arr[] = {4, 2, 4, 5, 2, 3, 1}; 
int arr_size = sizeof(arr)/sizeof(arr[0]); 
printRepeating(arr, arr_size); 
getchar(); 
return 0; 
} 
