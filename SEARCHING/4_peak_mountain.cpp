#include<iostream>
using namespace std;
int binary(int arr[],int size,int key){
int start=0;
int   end= size-1;
int   mid= start+(end-start)/2;
while (start<=end)
{
    if (arr[mid]<arr[mid+1])
    {
       start= mid+1;
    }
  
    if (arr[mid]>arr[mid-1])
    {
     end= mid-1;
    }
   
     mid= start+(end-start)/2;
}
 return start;
}
int main(){
int arr[6]={5,11,13,17,19,27};
//  function  call 
int bi= binary(arr,6,13);
cout<<"your element is :"<<bi;
return 0;
}