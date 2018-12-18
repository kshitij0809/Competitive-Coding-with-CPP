/*
k largest(or smallest) elements in an array | added Min Heap method
Question: Write an efficient program for printing k largest elements in an array. Elements in array can be in any order.
For example, if given array is [1, 23, 12, 9, 30, 2, 50] and you are asked for the largest 3 elements i.e., k = 3 then your program should print 50, 30 and 23.

	
*/

// C++ program to use priority_queue to implement min heap 
#include <bits/stdc++.h> 
using namespace std; 

// Driver code 
int main () 
{ 
	// Creates a min heap 
	priority_queue <int, vector<int>, greater<int> > pq; 
	pq.push(5); 
	pq.push(1); 
	pq.push(10); 
	pq.push(30); 
	pq.push(20); 

	// One by one extract items from min heap 
	while (pq.empty() == false) 
	{ 
		cout << pq.top() << " "; 
		pq.pop(); 
	} 

	return 0; 
} 
