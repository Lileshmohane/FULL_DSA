#include<iostream>
using namespace std;

int main(){
int size= 5;
int arr[]={1,2,3,4,5};
//cout<<sizeof(arr)<<endl;
//cout<<sizeof(arr)/sizeof(arr[1])<<endl;
for (int  idx= 0; idx<size; idx++)
{
    cout<<arr[idx]<<endl;
}
// for each  loop 
for ( int ele:arr)
{
    cout<<ele;
}
// while loop 
int indx=0;
while (indx<size)
{
   cout<<arr[indx]<<endl;
   indx++;
}
//  for take a user input 
char vowels[5];
for (int  idx= 0; idx<5; idx++)
{
    cin>>vowels[idx];
}
for (int  idx= 0; idx<5; idx++)
{
    cout<<vowels[idx]<<endl;
}
//  or each  loop
for (char &ele:vowels)
{
   cin>>ele;
}
for (int  idx= 0; idx<5; idx++)
{
    cout<<vowels[idx]<<endl;
}
return 0;
}
