#include<iostream>
using namespace std;
// m is a stude nt  m = 2
//  10 ,  20, 30 , 40 , 50 
bool isposible(int arr[],int n,int m,int mid){
    int studentcunt= 1;
    int pgsum= 0;
    for (int  i = 0; i < n; i++)
    {
        if (pgsum+arr[i]<=mid)
        {
          pgsum+=arr[i];
        }
        else
        {
            if (studentcunt>m||arr[i]> m)
            {
               return false;
            }
            pgsum= arr[i];
            
        }
        return true;
        
    }
    
}
int book(int arr[],int n,int m){
    int s=0;
    int sum=0;
    
    for (int  i = 0; i <n; i++)
    {  //we store and + in arr element in  sum 
        sum+=arr[i];
       
    }
    int e  = sum;
    int ans=-1;
    int mid=s+(e-s)/2;
  while (s<=e)
  {
   if (isposible(arr,n,m,mid))
   {
    ans= mid;
   e= mid-1;
   }
   else
   {
    s=mid+1;
   }
   mid=s+(e-s)/2;
  }
  
    return ans;
}
int main(){
   
int arr[]={10,20,30,40};
  int b= book(arr);
  cout<<" cunt book  is :"<<b;
return 0;
}
