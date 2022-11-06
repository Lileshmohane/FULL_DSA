#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v;
 for (int  i = 0; i <5; i++)
 {
    int element;
    cin>>element;
    v.push_back(element);
 }
 for (int i = 0; i < 5; i++)
 {
    cout<<v[i]<<" ";
    cout<<endl;
 }
 //insert a value in  a  vector 

v.insert(v.begin()+2,8);
 //  for ecach  loop 
 for (int ele:v)
 {
    cout<<ele<<" ";
 }
 //  now uses erase 
 v.erase(v.end()-2);
 //  while loop  
 int ind=0;
  while (ind<v.size())
  {
    cout<<v[ind++]<<" ";
  }
  
return 0;
}
