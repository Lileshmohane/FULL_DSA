// find last element in array 
/*
#include<iostream>
#include<vector>
using namespace std;
// find last element in array 
int main(){
vector<int >v;
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);
v.push_back(3);
int key;
cin>>key;
int occurence= -1;
for (int i=v.size()-1 ; i >0; i--)
{
   if (v[i]==key)
   {
   occurence= i;
   break;
   }
   

}
cout<<occurence<<endl;


return 0;
}
*/
// count the number of element is present in arrray 
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>v(5);
for (int  i = 0; i <v.size(); i++)
{
    cout<<"enter a element : ";
   cin>>v[i];
}

int key;
cin>>key;
int occurence= 0;
for (int ele:v)
{
   if (ele==key)
   {
     occurence++;
   }
   

}
cout<<occurence;

return 0;
}
*/
// count the element strecly  greater than value x
#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>v(5);
for (int  i = 0; i <v.size(); i++)
{
    cout<<"enter a element : ";
   cin>>v[i];
}

int key;
cin>>key;
int ans= 0;
for (int  i = 0; i <v.size(); i++)
{
    if (v[i]>key)
    {
      ans++;
    }
    
}
cout<<ans;
return 0;
}