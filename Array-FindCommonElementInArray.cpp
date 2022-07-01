#include <iostream> 

using namespace std; 

int main(){ 

int input1[100], input2[100],common[100]; 

  int size1=0, size2=0, i=0,j=0,k=0, x=0,count=0; 

 
 

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

 
 
 

for ( i=0; i<size1;i++){ 

  for ( j=0; j<size2; j++){ 

 
 

    if(input1[i]==input2[j]){ 

      count=0; 

      for(x=0;x<k;x++){ 

        if(input1[i]==common[x]){ 

          count++; 

        } 

      } 

      if(count==0){ 

          common[k]=input1[i]; 

          k++; 

        } 

    } 

  } 

 
 

} 

 
 

if(k==0){ 

  cout<<endl<<"\nCommon Element not found!"; 

 
 

} else{ 

  for(i=0;i<k;i++){ 

    cout<<common[i]<<" "; 

  } 

} 

return 0; 

 
 

} 