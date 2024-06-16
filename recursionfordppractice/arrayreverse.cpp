#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int>  fun(int l,int r,vector<int> & arr){
    if(l>=r) return arr;
    swap(arr[l],arr[r]);
    fun(l+1,r-1,arr);
    return arr;
}
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
 vector<int> arr(n);
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  vector<int>  final = fun(0,n-1,arr);
  for(int i=0;i<n;i++){
    cout<<"reversed elements are : ";
    cout<<final[i]<<" "<<endl;
  }


}