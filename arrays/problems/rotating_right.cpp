#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> temp;
    int k = 2; // Number of positions to rotate

    // Store last 'k' elements in 'temp'
    for (int i = nums.size() - k; i < nums.size(); i++) {
        temp.push_back(nums[i]);
    }

    // Shift elements to the right
    for (int i = nums.size() - k - 1; i >= 0; i--) {
        nums[i + k] = nums[i];
    }

    // Restore elements from 'temp'
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }

    cout << "Rotated right by 2 array is: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
