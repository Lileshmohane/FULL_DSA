// find second largest element in array  
/*
#include<iostream>
using namespace std;
int LargeElementIndex(int arr[],int n){
   int max= INT16_MIN;
   int maxindex=-1;
   for (int  i = 0; i < n; i++)
   {
  
   if (arr[i]>max)
   {
    max=arr[i];
    maxindex=i;
   }
   
   }
   return maxindex;
    
}
int main(){
  
int arr[]={2,6,1,2,6,4,3};
//  function  call  
int IndexOfLargest= LargeElementIndex(arr,7);
//arr[IndexOfLargest]=-1;
// when largest element duplicate element is present so 
int Largele= arr[IndexOfLargest];
for (int  i = 0; i < sizeof(arr)-1; i++)
{
    if (arr[i]==Largele)
    {
        arr[i]=-1;
    }
    
}

int SecondLargest=LargeElementIndex(arr,7);
cout<<arr[SecondLargest];
return 0;
}
*/
// now find in optimal solution  
#include<iostream>
using namespace std;
int LargeElementIndex(int arr[],int n){
   int max= INT16_MIN;
   int secondmax= INT16_MIN;
   for (int  i = 0; i < n; i++)
   {
  
   if (arr[i]>max)
   {
    max=arr[i];

   }
   }
  for (int  i = 0; i < n; i++)
  {
    if (arr[i]>secondmax&&arr[i]!=max)
    {
      secondmax=arr[i];
    }
    
  }
  return secondmax;
    
}
int main(){
  
int arr[]={2,6,1,2,6,4,3};
//  function  call  
int secon_lar=LargeElementIndex(arr,7);
cout<<secon_lar;
return 0;
}