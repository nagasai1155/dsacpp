#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> distinctValues;
    for (int i = 0; i < n; i++) {
        distinctValues.insert(arr[i]);
    }

    cout << "Number of distinct values: " << distinctValues.size() << endl;
    return 0;
}
