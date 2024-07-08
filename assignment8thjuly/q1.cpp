//perform kth rotation using array in c++;

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void rotateArray(std::vector<int>& nums, int k) {
    int n = nums.size();
    k %= n; // handle negative k
    std::reverse(nums.begin(), nums.begin() + n - k); // reverse first part
    std::reverse(nums.begin() + n - k, nums.end()); // reverse second part
    std::reverse(nums.begin(), nums.end()); // reverse the whole array
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    cout<<"before rotation : ";
    for(auto it :nums){
cout<<it<<" ";
    }
    cout<<endl;
    int k = 3;
    rotateArray(nums, k);
    cout<<"after rotation: "<<k<<"times"<<endl;
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
    // Output: 4 5 6 7 1 2 3
    // The array is rotated by 3 positions to the right.

}