#include<iostream>
using namespace std;
//  given sorted rotated array  find pvt element 
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while (s<e)
    {
       if (arr[m]>=arr[0])
       {
        s=m+1;
       }
       else
       {
        e=m-1;
       }
       
    }
    return s ;
}
int main(){
int arr[]={8,10,17,1,3};
cout<<" pivot is "<<getpivot(arr,5);
return 0;
}