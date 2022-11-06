#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v;
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
v.push_back(1);
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
v.push_back(2);
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
v.push_back(3);
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
v.push_back(4);
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
v.push_back(5);
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;

//resize of arr
v.resize(10);
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
//  now pop back  of array 
v.pop_back();
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
v.pop_back();
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
v.pop_back();
cout<<" size is: "<<v.size()<<endl;
cout<<" capacity is: "<<v.capacity()<<endl;
return 0;
}
