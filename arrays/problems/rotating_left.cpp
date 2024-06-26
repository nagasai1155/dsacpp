#include<bits/stdc++.h>
using namespace std;

int main(){

       vector<int> nums={1,2,3,4,5};
       vector<int> temp;
       //left rotate;
       int k =2;

       for(int i=0;i<k;i++){
        temp.push_back(nums[i]);//storing first two places into another vector
       }

       for(int i=k;i<nums.size();i++){
        nums[i-k] = nums[i];//shifting  elements to left
       }
        for(int i=0;i<nums.size();i++){
             nums[nums.size() - k + i] = temp[i];//srestoring elements from temp 
        }

        cout<<"rotated left by  array is : ";
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }


    return 0;
}