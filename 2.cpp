#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    // Given lines 
    int X[] = { 1, 3, 7 }; 
    int Y[] = { 2, 4, 6, 1 }; 
  
    int N = sizeof(X) / sizeof(X[0]); 
  
    int M = sizeof(Y) / sizeof(Y[0]); 
  
    // Function Call 
    cout << numberOfSquares(X, Y, N, M); 
  
    return 0; 
}
