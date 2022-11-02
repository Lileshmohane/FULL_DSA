/*
#include<iostream>
using namespace std;
// it is pass by  value 
//i creaet a function  i take a void return type basicaly it not return anything 
void pass(int z ){
    z=10;
}
int main(){
int a= 5;//  i take a variable in which atore a 5 value 

//  now i coll a function
pass(a);

cout<<a<<endl;
return 0;
}
//  as we can  seen  it create a copy of 5 int function  its not update a valur in function  its only  return copy vale 
*/
#include<iostream>
using namespace std;
// it is pass by  value 
//i creaet a function  i take a void return type basicaly it not return anything 
void pass(int &z ){
    z=10;
}
int main(){
int a= 5;//  i take a variable in which atore a 5 value 

//  now i coll a function
pass(a);

cout<<a<<endl;
return 0;
}
//  pass by  refrence we & use with   paramiter its not create a copy in function  it update a variable value what given 