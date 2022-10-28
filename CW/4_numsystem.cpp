//conveti  binary into decimal 
/*
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int ans=0;// in a ans we store a ans 
int pow=1; 
while(n>0)
{
int last= n%10;// to find  a last digit 
ans+=last*pow;
pow*=2;
n/=10;
}
cout<<ans;
return 0;
}

*/

// convert binaery into octa 
/*
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int ans=0;// in a ans we store a ans 
int pow=1; 
while(n>0)
{
int last= n%10;// to find  a last digit 
ans+=last*pow;
pow*=8;
n/=10;
}
cout<<ans;
return 0;
}
*/

// convert  a decimal  into binary 
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int ans=0;
int pow= 1;
while (n>0)
{
    int parity = n%2;
    ans+=parity*pow;
    pow*=10;
    n/=2;
}
cout<<ans;
return 0;
}
