/*
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (int  i = 1; i <=n; i++)
{
    for (int  j= 1;j<=n; j++)
    {
     cout<<j;
    }
    cout<<endl;
}
return 0;
}
*/
//  123,  321 ,  i= 1,  n =3 123 ,  
// n - i+1  3- 1+1 =  3 , 2 - 1+1
//  now reverse a pattern  
/*
#include<iostream>
using namespace std;

int main(){
int n; 
cin>>n;

for (int  i= n; i >=1; i--)
{
  for (int j =n; j>=1; j--)
  {
   cout<<j;
  }
  cout<<endl;
}
*/
/* now we write in diffrent way  


for (int  i = 1; i <=n; i++)
{
   for (int  j= 1; j<=n;j++)
   {
   cout<<n-j+1;
   }
   cout<<endl;
}

return 0;
}
*/
/* now make a triangle  *
                        **
                        ***
                        ****    */

/*
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for (int  row = 1; row <=  n ; )
{
  for (int  col = 1; col <=row;)
  {
     cout<<"*";
     col= col+1;
  }
  cout<<endl;
  row= row + 1;
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
for (int  i = 1; i <= n; i++)
{
   for (int j= 1; j <=i; j++)
   {
    cout<<i;
    //cout<<n-i+1;

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
for (int  i = 1; i <= n; i++)
{
 for (int j= 1;  j <=i;  j++)
   {
     cout<< j+i;
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
for (int  i = 1; i <= n; i++)
{
 for (int j= 1;  j <=n-i+1;  j++)
   {
     cout<< j;
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
for (int  i = 0; i < n; i++)
{
 for (int j= 0;  j <n-i-1;  j++)
   {
     cout<<" ";
   }
for (int  j= 0; j<(i+1); j++)
{
    
    cout<<"*";
}
for (int j= 0;  j <(i+1);  j++)
   {
     cout<<"*";
   }
for (int  j= 0; j<n-i-1; j++)
{
    
    cout<<" ";
}

   cout<<endl;
}
return 0;
}