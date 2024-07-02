#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Function to sort arr using insertion sort
    void insertionSort(int arr[], int n,int key){
        int i, j;
        for (i = 1; i < n; i++){
            key = arr[i];
            j = i - 1;

            // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
            while (j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }  // End of insertionSort function

int main(){

    //insertion sort  in c++ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n,200);
    
    // print array after sorting
    cout << "Sorted array is \n";
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    
}