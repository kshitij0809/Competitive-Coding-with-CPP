/*
Find the Number Occurring Odd Number of Times
Given an array of positive integers. All numbers occur even number of times except one number which occurs odd number of times. Find the number in O(n) time & constant space.
Examples :

Input : arr = {1, 2, 3, 2, 3, 1, 3}
Output : 3

Input : arr = {5, 7, 2, 7, 5, 2, 5}
Output : 5

*/




// C++ program to find the element 
// occurring odd number of times 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find element occurring 
// odd number of times 
int getOddOccurrence(int ar[], int ar_size) 
{ 
    int res = 0;  
    for (int i = 0; i < ar_size; i++)      
        res = res ^ ar[i]; 
      
    return res; 
} 
  
/* Diver function to test above function */
int main() 
{ 
    int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2}; 
    int n = sizeof(ar)/sizeof(ar[0]); 
      
    // Function calling 
    cout << getOddOccurrence(ar, n); 
      
    return 0; 
} 