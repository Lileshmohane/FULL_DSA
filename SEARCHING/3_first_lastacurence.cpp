//we are find occurence  start and last element i  array  
#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
int start=0;
int   end= size-1;
int   mid= start+(end-start)/2;
int ans= -1;
while (start<=end)
{
    if (arr[mid]==key)
    {
       ans=arr[mid];
       end=mid-1;
    }
  
    if (arr[mid]<key)
    {
      start= mid+1;
    }
    else
    {
     end= mid-1;
    }
     mid= start+(end-start)/2;
}
 return ans ;
}
int lastocc(int arr[],int size,int key){
int   start=0;
int   end= size-1;
int   mid= start+(end-start)/2;
int   ans= -1;
while (start<=end)
{
    if (arr[mid]==key)
    {
       ans=arr[mid];
       start=mid+1;
    }
    if (arr[mid]<key)
    {
      start= mid+1;
    }
    else
    {
     end= mid-1;
    }
     mid= start+(end-start)/2;
}
 return ans;
}
int main(){
int arr[6]={5,11,13,17,19,27};
//  function  call 
int first= firstocc(arr,6,5);
cout<<"your first element is  :"<<first<<endl;
int last= lastocc(arr,6,27);
cout<<"last element is  "<<last;
return 0;
}