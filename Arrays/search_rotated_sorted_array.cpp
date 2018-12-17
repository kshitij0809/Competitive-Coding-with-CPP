/*
Search an element in a sorted and rotated array
An element in a sorted array can be found in O(log n) time via binary search. But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.
*/


/*

Input arr[] = {3, 4, 5, 1, 2}
Element to Search = 1
  1) Find out pivot point and divide the array in two
      sub-arrays. (pivot = 2) //Index of 5
  2) Now call binary search for one of the two sub-arrays.
      (a) If element is greater than 0th element then
             search in left array
      (b) Else Search in right array
          (1 will go in else as 1 < 0th element(3))
  3) If element is found in selected sub-array then return index
     Else return -1.

*/



/*
Improved Solution:
We can search an element in one pass of Binary Search. The idea is to search

1) Find middle point mid = (l + h)/2
2) If key is present at middle point, return mid.
3) Else If arr[l..mid] is sorted
    a) If key to be searched lies in range from arr[l]
       to arr[mid], recur for arr[l..mid].
    b) Else recur for arr[mid+1..r]
4) Else (arr[mid+1..r] must be sorted)
    a) If key to be searched lies in range from arr[mid+1]
       to arr[r], recur for arr[mid+1..r].
    b) Else recur for arr[l..mid] 
*/

// Search an element in sorted and rotated 
// array using single pass of Binary Search 
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns index of key in arr[l..h] if  
// key is present, otherwise returns -1 
int search(int arr[], int l, int h, int key) 
{ 
    if (l > h) return -1; 
  
    int mid = (l+h)/2; 
    if (arr[mid] == key) return mid; 
  
    /* If arr[l...mid] is sorted */
    if (arr[l] <= arr[mid]) 
    { 
        /* As this subarray is sorted, we can quickly 
        check if key lies in half or other half */
        if (key >= arr[l] && key <= arr[mid]) 
        return search(arr, l, mid-1, key); 
  
        return search(arr, mid+1, h, key); 
    } 
  
    /* If arr[l..mid] is not sorted, then arr[mid... r] 
    must be sorted*/
    if (key >= arr[mid] && key <= arr[h]) 
        return search(arr, mid+1, h, key); 
  
    return search(arr, l, mid-1, key); 
} 
  
// Driver program 
int main() 
{ 
    int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int key = 6; 
    int i = search(arr, 0, n-1, key); 
  
    if (i != -1) 
    cout << "Index: " << i << endl; 
    else
    cout << "Key not found"; 
} 