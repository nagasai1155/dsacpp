#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5] = {2,3,4,5,6};
    int largest = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
    }
    int sl = INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i] >sl && arr[i] != largest){
            sl = arr[i];
        }
    }
    cout<<sl<<endl;
}