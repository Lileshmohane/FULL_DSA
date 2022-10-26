/*
#include<iostream>
using namespace std;
//  now create a void function 
void  print(int arr[],int size ){
    for (int  i = 0; i <size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
int main(){
//  create  a array  int type 
int n= 5;
int arr[n]={1,2,3,4,5};
print(arr,n);
//  now function call 

return 0;
}

*/
#include<iostream>
using namespace std;
 int getmax(int array[],int n){
  int maxi ;
   for (int  i = 0; i < n; i++)
     {
       // if (array[i]>max)
       // {
     //       max=  array[i];
     //   }
      maxi = max(maxi,array[i]);
        
     }
      return maxi;
 }

int main(){
     int size ;
     cin>>size;
     int arr[100] ;
     for (int  i = 0; i <  size; i++)
     {
         cout<<"eliment is "<<arr[i]<<endl;
     }
     
      cout<< "  the max value is : "<<getmax( arr, size)<<endl;

 return 0;
}
