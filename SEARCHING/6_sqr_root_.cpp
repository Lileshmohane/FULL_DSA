#include<iostream>
using namespace std;
int sqrroot(int n){
    int s=0;
    int e= n;
    int m= s+(e-s)/2;
    int ans= -1;
    while (s<=e)
    {
          int sqr= m*m;
       if (sqr==n)
       {
        return m;
       }
       if (sqr<n)
       {
        ans= m;
        s= m+1;
       }
       else
       {
        e= m-1;
       }
   
        m= s+(e-s)/2;
    }
        return ans;
    
}
int main(){
int n;
cin>>n;
int temp= sqrroot(n);
cout<<temp;
return 0;
}
