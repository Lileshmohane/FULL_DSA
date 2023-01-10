#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor 
    Node(int d){
    this->data=d;
    this->next=NULL;
    }
    // destructor 
    ~Node{
        int value = this ->data;
        if (this->next!=NULL)
        {
           delete  next;
           next= NULL;
        }
        cout<<" memory ko free kar do "<<value<<endl;
    } 
};
void insertnode(Node* &tail ,int element ,int data){
    //  asume link  list  is empty 
    if (tail == NULL)
    {
      Node* newnode= new Node(data);
      tail =newnode;
      newnode ->next = newnode;
    }
    else
    {
        //  non empty list 
        Node* curr =tail;
        while (curr->data!=element)
        {
           curr =curr->next;
        }
        
    }
    //  element found  
    Node*temp =new Node(d);
    temp ->next =curr ->next;

    curr ->next =temp;
    
}
void  print(Node* tail){
    Node* temp= tail;
    do{
       cout<<tail->data<<" ";
       tail = tail->next;
    }while (tail != temp);
}
int main(){
Node* tail = NULL;
insertatnode(tail,5,3);
print(tail);
return 0;
}
