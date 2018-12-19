/*
Find substrings that contain all vowels
We have been given a string in lowercase alphabets. We need to print substrings that contain all the vowels at-least one time and there are no consonants (non-vowel characters) present in the substrings.

Examples:

Input : str = aeoibddaeoiud
Output : aeoiu

Input : str = aeoibsddaeiouudb
Output : aeiou, aeiouu
Reference :- Samsung Interview Questions.


*/


// C++ program to find all substring that 
// contain all vowels 
#include<bits/stdc++.h> 

using namespace std; 

// Returns true if x is vowel. 
bool isVowel(char x) 
{ 
	// Function to check whether a character is 
	// vowel or not 
	return (x == 'a' || x == 'e' || x == 'i' || 
						x == 'o' || x == 'u'); 
} 

// Function to FindSubstrings of string 
void FindSubstring(string str) 
{ 
	unordered_set<char> hash; // To store vowels 

	int start = 0; 
	for (int i=0; i<str.length(); i++) 
	{ 
		// If current character is vowel then 
		// insert into hash , 
		if (isVowel(str[i]) == true) 
		{ 
			hash.insert(str[i]); 

			// If all vowels are present in current 
			// substring 
			if (hash.size()==5) 
				cout << str.substr(start, i-start+1) 
					<< " "; 
		} 
		else
		{ 
			start = i+1; 
			hash.clear(); 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	string str = "aeoibsddaeiouudb"; 
	FindSubstring(str); 
	return 0; 
} 
