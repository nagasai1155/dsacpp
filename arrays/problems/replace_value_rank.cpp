#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {100, 25, 56, 60};
    vector<int> sortedNums = nums; // Create a copy of the original array

    // Sort the copy in ascending order
    sort(sortedNums.begin(), sortedNums.end());

    // Create a vector to store ranks
    vector<int> ranks(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        auto it = lower_bound(sortedNums.begin(), sortedNums.end(), nums[i]);
        ranks[i] = distance(sortedNums.begin(), it) + 1; // Assign ranks (1-based index)
    }

    // Replace original array elements with ranks
    for (int i = 0; i < nums.size(); i++) {
        nums[i] = ranks[i];
    }

    cout << "Array after replacing with ranks: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

