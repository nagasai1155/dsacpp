#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){


    vector<int> arr={1,1,1,3,2,4,5,5,3,2};
int n = arr.size();
    set<int> st;
    for(int i=0;i<n;i++){

        st.insert(arr[i]);
    }
    int index =0;
   for(auto it: st){
    arr[index] = it;
     cout<<arr[index]<<" ";
    index++;
   

   }

  
 


}