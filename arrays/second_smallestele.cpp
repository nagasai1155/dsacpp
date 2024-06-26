#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int first = INT_MAX;
    int second = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<first){
            second= first;
            first= arr[i];
        }else if(second>arr[i]){
            second =arr[i];
        }
    }
    cout<<"second smallest: "<<second;
    return 0;
}
