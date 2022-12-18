/*#include<iostream>
using namespace std;
int  reverse( int arr[],int n){
    int s =0 ;
    int e= n-1;
  while (s<=e)
  {
  swap (arr[s],arr[e]);
  s++;
  e--;
  }
   return n;
}

 void printarr(int arr[],int n){
    for ( int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    
}
int main(){
 // i have a vactor in starting 
 int arr[7]= {2,3,4,5,7,8,9};
 int n;
 cout<<"enter the element : "<<endl;
 cin>>n;

 
   int fun  = reverse(arr,n);
    printarr(arr,n);
   cout<<"your ans is : "<<fun<<endl;
   
return 0;
}
*/
// now this que solv by vector 
#include<iostream>
#include<vector>
using namespace std;
  vector<int>revers(vector<int>v)
  {
  int s=0 ,e = v.size()-1;
  while (s<=e)
  {
    swap(v[s],v[e])
    s++;
    e--;
  }
  return v;
}
int print(int v ){
    for (int  i = 0; i < v; i++)
    {
      cout<<v[i]<<endl;
    }  
}
int main(){
vector<int> v;
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.push_back(10);
int ans = revers(v);
cout<<"enter a number :"<<endl;
print(ans);
return 0;
}

