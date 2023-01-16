#include<iostream>
using namespace std;
// sort zero and one 
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
     this->data  = data;
     this->next  = NULL;
     
    }
int sort(Node* heah){
 int zerocout=0;
 int onecount=1;
 int twocount=2;
 Node* temp = heah;
 while (temp != NULL)
 {
   if (temp->data==0)
   {
     zerocout++;
   }
   else if (temp->data==1){
    onecount++;
   }
   else if (temp->data ==2)
   {
    
    twocount++;
   }
 }
 temp=heah;
 while (temp != NULL)
 {
   if (zerocout!=0)
   {
    zerocout--;
   }
   else if (onecount!=1)
   {
    onecount--;
   }
   else if (twocount!=2)
   {
    
    twocount--;
   }
 }
 return heah;
}
};
int 
int main(){
Node* temp = new Node(10);

return 0;
}
