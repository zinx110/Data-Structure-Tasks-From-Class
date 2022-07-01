#include <iostream> 

using namespace std; 

struct Node{ 

    int data; 

    Node *left; 

    Node *right; 

}; 

int traversal_Inorder(Node *node){ 

    if(node->left!=NULL)traversal_Inorder(node->left); 

    cout<<node->data<<" "; 

    if(node->right!=NULL)traversal_Inorder(node->right); 

    return 0; 

} 

 

int main(){ 

    Node *curr; 

    Node *root; 

    int input; 

    cout<<"Give input of the nodes of Binary Search Tree: "<<endl; 

    cin>>input; 

    while(input!=-1){ 

        Node *node=new Node(); 

        node->data=input; 

        node->left=NULL; 

        node->right=NULL; 

        if(root==NULL){ 

            root=node; 

        }else{ 

            curr=root; 

            while(curr!=NULL){ 

                if(input>curr->data && curr->left!=NULL)curr->left->data=input; 

                else if(input<curr->data && curr->right!=NULL)curr->right->data=input; 

                else break; 

            } 

            if(input>curr->data)curr->left=node; 

            else curr->right=node; 

        } 

        cin>>input; 

    } 

    cout<<"Printing Binary search tree in Descending order of data: "<<endl; 

    traversal_Inorder(root); 

    return 0; 

} 