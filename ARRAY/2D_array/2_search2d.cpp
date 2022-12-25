#include<iostream>
using namespace std;
//  search 2 d array 
// create a function    
bool issearch(int arr[][3],int temp,int row,int col){
    for (int  row = 0; row< 3; row++)
    {
       for (int  col = 0; col < 3; col++)     
       {
          if (arr[row][col]==temp)
          {
            return 1;   
          }
       }
    }
    return 0;
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
int temp;
cin>>temp ;
bool n = issearch(arr,temp,3,3); //coll a function 
 if (n)
 {
    cout<<" your element is present : "<<endl;
 }
 else
 {
    cout<<" your element is not present :"<<endl;
 }
 
return 0;
}
