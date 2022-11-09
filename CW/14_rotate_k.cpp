// rotate a array in k  
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    //k=2
    //1,2,3,4,5
    //5,4,3,2,1
    //4,5,1,2,3
 vector<int> v;
 int k= 3;
 k=k%v.size();
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 v.push_back(5);
 reverse(v.begin(),v.end());
 reverse(v.begin(),v.begin()+k);
 reverse(v.begin()+k,v.end());
 for (int a:v)
 {
    cout<<a<<" ";
 }
 
return 0;
}
