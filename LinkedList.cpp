#include <iostream> 

using namespace std; 

 

struct List { 

    int Data; 

    List *Prev; 

    List *Next; 

}; 

int main(){ 

    int i=0, value=0; 

    List *head=NULL; 

    List *Curr=NULL; 

     

    //creating new linked list  

    for(i=10;i<=100;i+=10){ 

        List *Node = new List (); 

        Node->Data=i; 

        Node->Next=NULL; 

        if(head==NULL){ 

            //first element 

            head=Node; 

            Node->Prev=NULL; 

        } else{ 

            //other elements 

            Curr->Next=Node; 

            Node->Prev=Curr; 

        } 

        Curr=Node; 

         

    } 

     

    Curr=head; 

    cout<<"Head Pointer: "<<head<<endl; 

     

    //print linked list 

    while(Curr!=NULL){ 

            cout<<"Node Address: "<<Curr<<" Previous: "<<Curr->Prev<<" Data: " << Curr->Data<<" Next: "<< Curr->Next<<endl; 

            Curr=Curr->Next;  

    } 

     

    // Insert value 

    cout<<"Enter New Value to insert into Linked List:  "; 

    cin>>value; 

    Curr=head; 

    List *New= new List(); 

    New->Data=value; 

    while(Curr!=NULL){ 

        if(Curr->Data>value && Curr->Prev->Data<value){ 

            Curr->Prev->Next=New; 

            New->Prev=Curr->Prev; 

            New->Next=Curr; 

            Curr->Prev=New; 

        } 

        Curr=Curr->Next; 

    } 

     

    //delete from Linked list 

     cout<<"Enter  Value to remove from Linked List:  "; 

    cin>>value; 

    Curr=head; 

    while(Curr!=NULL){ 

        if(Curr->Data==value){ 

            Curr->Prev->Next=Curr->Next; 

            Curr->Next->Prev=Curr->Prev; 

        } 

        Curr=Curr->Next; 

    } 

    Curr=head; 

    //printing the list again 

    while(Curr!=NULL){ 

        cout<<"Node Address: "<<Curr<<" Previous: "<<Curr->Prev<<" Data: " << Curr->Data<<" Next: "<< Curr->Next<<endl; 

        Curr=Curr->Next;  

    } 

     

    return 0; 

     

     

} 