#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//printing all subsequences from given array or vector<int> arr;
void fun(int index ,int n,int arr[],vector<int> &ds){
    if(index == n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"[]";
        }
        
        cout<<endl;
        return;
    }
    ds.push_back(arr[index]);
    fun(index+1,n,arr,ds);
    ds.pop_back();
    fun(index+1,n,arr,ds);
    return;

}
int main(){
    int n=3;
    int arr[]={3,1,2};
    vector<int> ds;
    fun(0,n,arr,ds);
}