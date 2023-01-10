#include<iostream>
using namespace std;
class  Node{
    public:
    int  data;
    Node* prev;
    Node* next;
    //  constructor 
    Node(int d){
    this->data= d;
    this->next=NULL;
    this->prev=NULL;
    }
};
//  print a node element 
void print(Node* head){
    Node* temp= head;
//  now temp  data ins not null  so print a temp  data 
while (temp!=NULL)
{
   cout<<temp ->data<<" ";
   // increase a temp value 
   temp=temp->next;
}
cout<<endl;
}
int getlens(Node* head){
    int len= 0;
  Node* temp= head;
//  now temp  data ins not null  so print a temp  data 
while (temp!=NULL)
{
     len++;
   // increase a temp value 
   temp=temp->next;
}
return len;
}
// inserta at head 
void  insertathead(Node* &head ,int d){
Node* temp = new Node(d);
temp ->next = head;
head ->prev = temp;
head =temp;
}
//  inserta at tail
void insertattail(Node* &tail ,int d){
  Node*temp  = new  Node(d);
  tail->next= temp;
  temp->prev = tail;
  tail =temp;
}

//  insert at position
void  insertatposition(Node* &tail ,Node* &head,int position ,int d){
  // insert  at start 
  if (position == 1)
  {
   insertathead(head,d);
   return;
  }
  Node* temp =head;
  int cnt =1;
  while (cnt<position-1)
  {
    temp = temp->next;
    cnt++;
  }
  //insert at last  position 

  if (temp ->next ==NULL){
    insertattail(tail , d);
    return;
  }
  // insert at position 
  Node* nodetoinsert= new Node(d);// create a node
  nodetoinsert ->next =temp->next;
  temp ->next->prev =nodetoinsert;
  temp->next =nodetoinsert;
  nodetoinsert->prev =temp;


}
//  delete a node 
// void deletnode(int position ,Node* & head){
// if (position == 1)
// {
//    Node* temp =head;

// }

// }
int main(){
 Node* node1 =new Node(10);
 Node* head = node1;
 Node*tail = node1;
print(head);

cout<<getlens(head)<< endl;

insertathead(head,23);
print(head);

insertattail(tail,24);
print(tail);

insertatposition(tail,head,1,100);
print(head);
return 0;
}

