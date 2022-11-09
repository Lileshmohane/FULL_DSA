//  given q queries check  given number is present or not 
#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>v(n);
for (int  i = 0; i < n; i++)
{
  cin>>v[i];
}
//  it is constatant term  in max 10 pw 5 write like this  1e5 +10
const  int N= 1e5 +10;
//  in our vector element n size 0 value initialize
vector<int>freq(N,0);
for (int  i = 0; i < n; i++)
{
   freq[v[i]]++;
}
cout<<" enter query ";
int q;
cin>>q;
while (q--)
{
    int queryelement;
    cin>>queryelement;
    cout<<freq[queryelement]<<endl;
}

return 0;
}
