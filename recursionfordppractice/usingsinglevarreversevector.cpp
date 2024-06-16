#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
vector<int> fun(int i,int r,vector<int> & arr,int n){
    if(i>= r){
        return arr;
    }
    swap(arr[i],arr[n-i-1]);
    fun(i+1,n-i-1,arr,n);
    return arr;
}

int main(){

    int n;
    cout<<"size of vector : ";
    cin>>n;
    int i=0;
    vector<int> arr={1,2,3,4,5};
    vector<int> final = fun(0,n-i-1,arr,n);
    cout<<"reversed elements are : ";
    for(int i=0;i<n;i++){
        
        cout<<final[i]<<" ";
    }
    
}