/*
#include<iostream>
using namespace std;

int main(){
int row= 3;
int col= 6;
for (int  i = 0; i < row; i++)
{
 for (int  j= 0; j<col; j++)
 {
    cout<<"*";
 }
 cout<<endl;
}

return 0;
}
*/
/*Hollow rectangular pattern  */
/*
#include<iostream>
using namespace std;

int main(){
int row,col;
cin>>row;
cin>>col;
for (int  i = 1; i <=row; i++)
{
 for (int  j= 1; j<=col; j++)
 {
    if (i==1||j==1||i==row||j==col)
    {
       cout<<"*";
    }
    else
    {
        cout<<" ";
    }
    
 }
 cout<<endl;
}
return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
int row,col;
cin>>row;
for (int  i = 1; i<=row; i++)
{
   for (int j=1; j<=i;   j++)
   {
    cout<<"*";
   }
   cout<<endl;
}

return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
int row;
cin>>row;
for (int  i = 1; i<=row; i++)
{
   for (int j=1; j<=row-i+1;   j++)
   {
    cout<<"*";
   }
   cout<<endl;
}

return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for (int  i = 1; i<=n; i++)
{
   for (int j=1; j<=(n-i);   j++)
   {
    cout<<" ";
   }
    for (int j=1; j<=(2*i-1);   j++)
   {
    cout<<"*";
   }
   cout<<endl;
}

return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for (int  i = 1; i<=n; i++)
{
   for (int j=i; j<=n; j++)
   {
    cout<<j;
   }
    for (int j=1; j<=i-1;   j++)
   {
    cout<<j;
   }
   cout<<endl;
}

return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n;
cin>>m;
for (int  i = 1; i<=n; i++)
{
   for (int j=1; j<=n; j++)
   {
   if ((i+j)%2==0)
   {
    cout<<"1";
   }
   else
   {
    cout<<"2";
   }
    
   }
    cout<<endl;
   }
 
return 0;
}
*/
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for (int  i = 1; i<=n; i++)
{
 for (int  j= 1; j <(n-i); j++)
 {
    cout<<" ";
 }
 for (int j= 1;j<=i;j++)
 {
   cout<<j;
 }
 for (int j=(i-1);j>=1;j--)
 {
   cout<<j;
 }
 
 cout<<endl;
}

return 0;
}