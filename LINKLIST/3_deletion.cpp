#include<iostream>
using namespace std;
//  create a class
class Node{
    // parameters 
    public:
    int data;
    Node*next;
   //  constructor 
   Node(int data ){
    this ->data=data;
    this ->next=NULL;
   }
};
//  create a destructer
~Node(){
   int value = this ->data;
   if (this->next!=NULL)
   {
   delete next;
   this->next= NULL;

   }
   cout<<" memory  is free node with data "<<value<<endl;
}
void insertattail(Node* &tail,int d){
     Node* temp = new Node(d);
     tail ->next=temp;
     tail= temp;//tail ->next;

}
void insertathead(Node* &head, int d){
    // when  any  type of data come so  we create  new node temp  type 
    //  temp nis our new node 
    Node* temp = new Node(d);
    //  now temp next value is equal to head of node value 
    temp ->next =head;

    head= temp;
}
 //  now create a print value 
 void insertatpogition(Node* &tail,Node* &head ,int position ,int d ){
    if (position==1)
    {
        insertathead(head,d);
        return;
    }
    
    Node*temp= head;
    int cnt= 1;
while (cnt<position-1)
{
    temp =temp ->next;
    cnt++;
}
//insert at last 
if (temp ->next==NULL)
{
    insertattail(tail,d);
  return;
}
//  creating a node for d 
Node* nodetoinsert= new Node(d);
nodetoinsert ->next =temp->next;
temp->next= nodetoinsert;

 }
void print (Node* &head ){
    Node* temp =head;
    while (temp!=NULL)
    {
       cout<<temp ->data<<" ";
       temp = temp ->next;
    }
    cout<<endl;
}
void deletnode(int position,Node* & head){
 // delet first ar start node 
    if (position==1)
    {
        Node* temp =head;
        head=head->next; 
        delete  temp;
    }
    else
    {
        //delete any  other midle node or last  node 
        Node* curr =head;
        Node*  prev=NULL;
        int cut=1;
        while (cnt)
        {
            /* code */
        }
        
    } 
    
}
int main(){
//  create a object in new node  to store in heap  
Node* node1= new  Node(10);

Node*  head= node1;
Node*  tail= node1;
print(head);
 insertattail(tail,12);
print(head);
 insertattail(tail,20);
print(head);
insertatpogition(tail,head,1,15);
print(head);
return 0;
}