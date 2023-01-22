#include<bits/stdc++.h>
using namespace std;
class  Stack{
    public:
    void treverse(stack<int> & nums,int ele){
         if(nums.empty()){
            nums.push(ele);
        return;
    }
    // pop up eleement in  stack
    int  num = nums.top();
       nums.pop();
    // recursive call  
   
    treverse(nums,num);
    nums.push(ele);
    }
public:

void rev(stack<int> & nums){
    //  basea  case 
    if(nums.empty()){
        return;
    }
    // pop up eleement in  stack
    int num = nums.top();
    nums.pop();
    // recursive call  
    rev(nums);
    streverse(nums,num);
}
};
int main(){
//
 
      
return 0;
}
