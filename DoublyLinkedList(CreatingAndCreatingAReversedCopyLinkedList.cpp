// Take input to make a Doubly Linked List. Then reverse the linked list and make a new linked list with the reversed list

// Final Lab Task



#include<iostream> 
using namespace std; 
struct List
{

int Data; 
List *Prev; 
List *Next;
};



int main()

{

int input,list_size; int i=0,value=0; List *head=NULL; List *Curr=NULL;


List *head2=NULL; List *Curr2=NULL;


cout<<"Enter the size of the linked list :"<< endl; cin>>list_size;

cout<<"Enter the elements of the linked list: "<<endl; for(i=1;i<=list_size;i++)
{



List *Node=new List();



cin>>input;



Node->Data=input; Node->Next=NULL; if(head==NULL)
{

head=Node;

Node->Prev=NULL;

}

else

{

Curr->Next=Node; Node->Prev=Curr;
}

Curr=Node;

}

Curr=head;

cout<<"Head Pointer: "<<head<<endl; while(Curr!=NULL)
{

cout<<"Node Address: "<<Curr<<" Previous: "<<Curr->Prev<<" Data: "<<Curr->Data<<" Next: "<<Curr->Next<<endl;

Curr=Curr->Next;

}

cout<<"Enter New value to insert into LINKED LIST: "; cin>>value;
Curr=head;

List *NEW=new List(); NEW->Data=value; while(Curr!=NULL)
{

if(Curr->Data>value && Curr->Prev->Data<value)

{

Curr->Prev->Next=NEW; NEW->Prev=Curr->Prev; NEW->Next=Curr;
Curr->Prev=NEW;

}

Curr=Curr->Next;

}

// Curr=head;

cout<<"Enter Value to remove from LINKED LIST: "; cin>>value;
Curr=head; while(Curr!=NULL)
{

if(Curr->Data==value)

{

Curr->Prev->Next=Curr->Next; Curr->Next->Prev=Curr->Prev;
}

Curr=Curr->Next;

}

Curr=head; while(Curr!=NULL)
{

cout<<"Node address: "<<Curr<<" Previous Node: "<<Curr->Prev<<" Data: "<<Curr->Data<<" Next: "<<Curr->Next<<endl;

Curr=Curr->Next;

}



//	reversing



cout<<endl<<"Creating New Linked List with Reversed List.	"<<endl;



Curr=head;



while(Curr!=NULL)

{



List *Node2=new List();

Node2->Data=Curr->Data; Node2->Prev=NULL; if(head2==NULL)
{

head2=Node2; Node2->Next=NULL;
}

else

{

Curr2->Prev=Node2; Node2->Next=Curr2;
}

Curr2=Node2;



Curr=Curr->Next;

}

head2=Curr2;





cout<<endl <<endl ;



cout<<endl<<"Printing The New Reversed Linked List.	"<<endl;

Curr2=head2; while(Curr2!=NULL)
{

cout<<"Node address: "<<Curr2<<" Previous Node: "<<Curr2->Prev<<" Data: "<<Curr2->Data<<" Next: "<<Curr2->Next<<endl; Curr2=Curr2->Next;
}

return 0;

}


 
