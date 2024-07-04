#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largest(int n, int arr[]){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        mini= min(mini,arr[i]);
    }
    return mini;
}
int main(){

int arr[] ={34,2,87,9,1,6};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<largest(n,arr);

}