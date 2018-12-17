
#include <iostream>

using namespace std;

#include <stdio.h> 
void print(int arr[][3], int m, int n) 
{ 
    int i, j; 
    int a[m][n];
    for (i = 0; i < m; i++) 
     {
        for (j = 0; j < n; j++) 
        
        {
            a[i][j]=0;
            for(int k=0;k<m;k++){
                *(*(a+i)+j)+=*(*(arr+i) + k)**(*(arr+k) + j);
            }
            cout<<a[i][j]<<"    "; 
            
        }
        cout<<endl;
  
     }
} 
  
int main() 
{ 
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    int m = 3, n = 3; 
  
    // We can also use "print(&arr[0][0], m, n);" 
    print(arr, m, n); 
    return 0; 
} 