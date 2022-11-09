//  find total  number of pair in array whose sum  is equal  to the given value x
/*
#include<iostream>
using namespace std;
void sum(int arr[],int n,int target){
   int pair=0;
    for (int i = 0; i <n; i++)
    {
        for (int  j= i+1; j< n; j++)
        {
           if (arr[i]+arr[j]==target)
           {
            pair++;
           }
           
        } 
        
    }
   cout<<pair;
}
int main(){
    int n= 5;
  
int arr[n]={3,4,6,7,2};
  int target= 7;
//  function  call  
sum(arr,n,target);

return 0;
}
*/
//  find the triplate sum of given nu  of arr  group  of triplte sum

#include<iostream>
using namespace std;
void sum(int arr[],int n,int target){
   int pair=0;
    for (int i = 0; i <n; i++)
    {
        for (int  j= i+1; j< n; j++)
        {
           for (int k = j+1; k <n; k++)
           {
            if (arr[i]+arr[j]+arr[k]==target)
           {
            pair++;
           }
           }  
        } 
    }
   cout<<pair;
}
int main(){
    int n= 5;
  
int arr[n]={3,1,2,4,7,6};
int target= 6;
//  function  call  
sum(arr,n,target);

return 0;
}