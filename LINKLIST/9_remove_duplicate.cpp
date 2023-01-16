#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

Node(int data){
    this->data= data;
    this->next =NULL;
}
};
Node* uniqe(Node* head){
    //  if node is empty 
    if (head==NULL)
    {
      return NULL;
    }
    // non empty list
    Node* curr =head;
    while (curr != NULL)
    {
    if ((curr->next!=NULL)&&curr->data == curr->next->next)
    {
        Node* next_next = curr->next;
        delete(nodetodelete);
        curr->next=next_next;
    }
    else
    {
       curr = curr->next;
    }
    
    }
    return  head;
    
}
int main(){

return 0;
}
