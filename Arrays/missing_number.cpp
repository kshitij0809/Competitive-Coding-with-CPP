/*
Find the Missing Number
You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
*/


#include<stdio.h> 
  
/* getMissingNo takes array and size of array as arguments*/
int getMissingNo (int a[], int n) 
{ 
    int i, total; 
    total  = (n+1)*(n+2)/2;    
    for ( i = 0; i< n; i++) 
       total -= a[i]; 
    return total; 
} 
  
/*program to test above function */
int main() 
{ 
    int a[] = {1,2,4,5,6}; 
    int miss = getMissingNo(a,5); 
    printf("%d", miss); 
    getchar(); 
} 