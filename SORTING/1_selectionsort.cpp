#include<iostream>
using namespace std;
//  selestion  sort   2 5 3 1 9 // 2,1 
                     //   1 5 3 2 9 //  5,3
                     //   1 3 5 2 9 //  3,2 
                     //   1 2 5 3 9 // 5, 3 
                     //   1 2 3 5 9// our array  is sorted 
                     //  now as  we seen first we selct then  sort 
 void swap(int *x ,int *y){
   int temp = *x;
   *x = *y;
   *y = temp;
 }
  int printarr(int arr[], int size){
     for (int  i = 0; i < size; i++)
     {
        cout<<arr[i]<<" ";
        cout<<endl;  
     }
  }
  void selectionsort(int arr[],int size){
   for (int  i = 0; i <size-1 ; i++)
   {
     for (int  j = i+1; j <size; j++)
     {
         int minindex = i;
          if (arr[minindex]>arr[j])
          {
             minindex =  j;
          }
          swap(arr[minindex],arr[i]);
     }
   }
  }
 int main(){
    cout<<"enter the number : "<<endl;
    int n; 
    cin>>n;
    int arr[n]= {8,5,2,1,0,9,6,4};
    selectionsort(arr,n);
    cout<<"answer is : "<<endl;
   printarr(arr,n);
return 0;
}
