#include<iostream>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
class  Stack{
    public:
    void sortstack(stack<int> & nums,int ele){
         if(nums.empty()||(!nums.empty() and nums.top>ele)){
            nums.push(ele);
        return;
    }
    // pop up eleement in  stack
    int  num = nums.top();
       nums.pop();
    // recursive call  
   
    sortstack(nums,num);
    nums.push(ele);
    }
public:

void sort(stack<int> & nums){
    //  basea  case 
    if(nums.empty()){
        return;
    }
    // pop up eleement in  stack
    int num = nums.top();
    nums.pop();
    // recursive call  
    sort(nums);
    sortstack(nums,num);
}
};
int main(){

return 0;
}
