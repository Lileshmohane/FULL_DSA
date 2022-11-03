#include<iostream>
using namespace std;
void  leaniar(int arr[],int size,int key){
    int ans=0;
   for (int  i = 0; i < size; i++)
    {
      if (arr[i]==key)
      {
       ans= key;
       break;
      }
      
    }
   cout<<ans;
}
int main(){
int key =7;
int size=5;
int arr[]={2,3,7,8,9};
 leaniar(arr,size,key);


return 0;
}
