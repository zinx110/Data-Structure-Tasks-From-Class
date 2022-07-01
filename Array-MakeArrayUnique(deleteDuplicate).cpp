#include <iostream> 

using namespace std; 

int main(){ 

int input[100]; 

  int size=0,  i=0,j=0,k=0,p=0; 

  cout << "Size of 1st Array? "; 

  cin>>size; 

for (i=0;i<size;i++){ 

  cin>>input[i]; 

} 

 
 

k=size; 

for (i=0; i<k-1;i++){ 

  for (j=i+1;j<k;j++){ 

    if(input[i]==input[j]){ 

      k--; 

      for(p=j;p<k;p++){ 

        input[p]=input[p+1]; 

      } 

    } 

 
 

  } 

} 

if(k==size){ 

  cout<<endl<<"Array already Unique!"; 

 
 

} else{ 

  for(i=0;i<k;i++){ 

    cout<<input[i]<<" "; 

  } 

} 

 
 
 

return 0; 

 
 

} 