//find uniqe eleemnt in arra which not in duplicate present in array 
#include<iostream>
using namespace std;
void uniqe(int arr[],int n){

    for (int i = 0; i <n; i++)
    {
    for (int j= i+1; j<n; j++)
    {
       if (arr[i]==arr[j])
       {
        arr[i]=arr[j]=-1;
       }
    } 
    }
    for (int i = 0; i < n; i++)
    {
       if (arr[i]>0)
       {
         cout<<"uniqe number is :"<<arr[i];
       }
       
    }
    
}
int main(){
  
int arr[]={2,3,1,2,4,4,1};
//  function  call  
uniqe(arr,7);
return 0;
}
