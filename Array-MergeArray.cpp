#include <iostream> 

using namespace std; 

int main(){ 

int input1[100], input2[100],mergeArray[100]; 

  int size1=0, size2=0, i=0,j=0; 

  cout << "Size of 1st Array? "; 

  cin>>size1; 

for (i=0;i<size1;i++){ 

  cin>>input1[i]; 

} 

  cout << "Size of 2nd Array? "; 

  cin>>size2; 

for (i=0;i<size2;i++){ 

  cin>>input2[i]; 

} 

for (i=0;i<size1;i++){ 

  mergeArray[i]=input1[i]; 

} 

for (i=0;i<size2;i++){ 

  mergeArray[size1+i]=input2[i]; 

} 

 
 
 

j=size1+size2-1; 

for(i=j; i>=0;i--){ 

  cout<< mergeArray[i] << " "; 

} 

 
 

return 0; 

 
 

} 