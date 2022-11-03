/*
// sum of array 
#include<iostream>
using namespace std;
//  calculate the sum  of all  the element in the given array 
void arrs(int arr[],int size){
    for (int  i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
void   sum(int arr[],int size){
    int sum=0;
    for (int  i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
     cout<<"sum is:"<<sum;
}
int main(){
int size= 5;
int arr[]={1,2,3,4,3};
//  function  call  
 arrs(arr,size);
  cout<<endl;
 sum(arr,size);

 
return 0;
}
*/

//find maximum element in array 
#include<iostream>
using namespace std;
void arrs(int arr[],int size){
    for (int  i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
int  larg(int arr[],int size){
    int larg =arr[0];
 
    for (int  i = 0; i < size; i++)
    {
      if (arr[i]>larg)
      {
        larg=arr[i];
      }
    
    }
       return  larg;
}
int main(){
int size= 5;
int arr[]={1,7,3,4,5};
//  function  call  
arrs(arr,size);
  cout<<endl;
int s= larg(arr,size);
cout<<s;

return 0;
}
