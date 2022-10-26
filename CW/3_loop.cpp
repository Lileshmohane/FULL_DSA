/*
#include<iostream>
using namespace std;
// count the number of digit 
//234567
// 234567/10= 23456
// 23456/10=2345
// 2345/10=234
int main(){
int n;
cin>>n;//234567
int digit=0;
while (n>0)
{
  digit++; //2 3
  n=n/10; 
  
}
cout<<digit;
return 0;
}
*/


//  find sum of digit given  number of sum  
//34762
//34762%10=2 ,  34762/10 = 3476
//3476%10= 6 ,  3476/10  = 347
//347%10=  7 ,  347/10  =  34
//34%10=   4 ,  34/10  =   3
//3%10=    3 ,  3/10  =    0
//2+6+7+4+3=22
/*
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int sum= 0;
while (n>0)
{
  int ld = n%10;
  sum+= ld;
   n= n/10; 
}
cout<<sum;
return 0;
}
*/



// reverse a digit  of number 
// 34762 , 26743
/*
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int reverse= 0;
while (n>0)
{

 int ld = n%10;
  reverse= reverse*10+ld;
   n= n/10; 
}
cout<<reverse;


return 0;
}
*/



/*
//find the sum  of the following series 
#include<iostream>
using namespace std;
//  s= 1-2+3-4...n= 
//  we seen even  number  subtract and odd number add 
int main(){
int n;
cin>>n;
int sum =0;
for (int  i = 0; i <=n; i++)
{
   if (i%2==0)
   {
   sum-=i;
   }
   else
   {
    sum+=i;
   }
   
}

cout<<sum<<endl;
return 0;
}
*/


//  print the first n  factorial  number

#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int fact = 1;
for (int  i = 1; i <=n; i++)
{
    fact*=i;
    cout<<fact<<endl;
}

return 0;
}
