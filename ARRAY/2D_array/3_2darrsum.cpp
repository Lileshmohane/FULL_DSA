#include<iostream>
using namespace std;
 void printarr(int arr[][3],int row , int col){
     // this is for a  row adition 
   /*  for (int  row = 0; row  < 3; row ++)
     {
          int sum = 0;
         for (int  col = 0; col<3; col++)
         {
           sum += arr[row][col];
         }
         cout<<sum<<" ";
      }
     cout<<endl;
 }*/
 // this for a  a columm addition 
 for (int  col= 0; col  < 3; col ++)
     {
       int sum = 0;
         for (int  row  = 0; row <3; row ++)
         {
             sum += arr[row][col];
         }  
         cout<<sum<<" ";
     }                     
     cout<<endl;
 }
int main(){     
int arr [3][3];
//  create a for loop 
for (int row = 0; row<3; row++)
{
    for (int col = 0; col < 3; col++)
    {
        cin>>arr[row][col];
    }
    
}
for (int row = 0; row<3; row++)
{
    for (int col = 0; col < 3; col++)
    {
        cout<<arr[row][col]<<" ";

    }
    cout<<endl;
}
cout<<" enter a number  : "<<endl;

printarr(arr ,3,3);
return 0;
}

