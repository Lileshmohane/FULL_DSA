#include<iostream>
#include<vector>
using namespace std;
// print in wave form if col is even so top to down when col is odd so down to top
// 0 1 2 indez
// 1 2 3
// 4 5 6
// 7 8 9
int wave(int arr[][3],int rsize,int csize){
    for (int  col = 0; col<csize ; col++)
    {
      if (col&1)
      {
        // odd case 
        for (int row= rsize-1; row >=0; row--)
        {
           cout<<arr[row][col]<<" ";
        }
        
      }
      else
      {
         // even case 
        for (int row= 0; row <rsize; row++)
        {
           cout<<arr[row][col]<<" ";
        }
      }
      
    }
    
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

cout<<" enter a number  : "<<endl;

wave(arr ,3,3);
return 0;
}
