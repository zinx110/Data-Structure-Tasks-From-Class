#include <iostream> 

using namespace std; 

 

int main (){ 

 

int arr[10]; 

int i=0; 

 
 

cout << "Input 10 numbers : "<< endl; 

for (int i=0; i<=9;i++){ 

  cin>> arr[i]; 

} 

cout << endl << "Array in order : "; 

for (int i=0;i<=9; i++){ 

  cout << arr[i] <<" "; 

} 

cout << endl << "Array in reverse order : " ; 

for (int i=9;i>=0; i--){ 

  cout << arr[i] <<" "; 

} 

return 0; 

} 