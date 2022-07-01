#include <iostream> 

using namespace std; 

 
 

void range(int start,int end){ 

 
 
 

for (int i=start; i<=end;i++){ 

  if (i%2 !=0){ 

    cout <<i <<" "; 

  } 

} 

 
 

} 

 
 

int main (){ 

int start,end; 

 
 
 

cout << "Starting Value : "; 

cin>>start; 

cout << "Ending Value : "; 

cin>>end; 

 
 

range(start, end); 

 
 
 

return 0; 

} 
