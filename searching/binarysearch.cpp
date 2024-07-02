#include<bits/stdc++.h>
using namespace std;

// Function to perform binary search
    int binarySearch(int arr[], int l, int r, int x) {
        if (r >= l) {
            int mid =( l + r)/ 2;

            // If the element is present at the middle itself
            if (arr[mid] == x)
                return mid;

            // If element is smaller than mid, then it can only be present in left subarray
            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);

            // Else the element can only be present in right subarray
            return binarySearch(arr, mid + 1, r, x);
        }

        // We reach here when element is not present in array
        return -1;
    }
int main(){

    //binary search in c++
    int arr[] = {22, 13, 4, 108, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)? printf("Element is not present in array"):printf("element found");

}