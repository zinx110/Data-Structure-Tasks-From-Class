#include <iostream> 

using namespace std; 

 
 

int main (){ 

 
 
 

int arr[10]; 

int odd=0; 

int even=0; 

 
 
 

cout << "Input 10 numbers : "<< endl; 

for (int i=0; i<=9;i++){ 

  cin >> arr[i]; 

} 

 
 

cout << endl << "Array in order : "; 

for (int i=0;i<=9; i++){ 

  if(arr[i]%2==0){ 

    even++; 

  } else { 

    odd++; 

  } 

} 

cout << endl << odd << " odd numbers" ; 

cout << endl << even << " even numbers" ; 

 
 

return 0; 

} 