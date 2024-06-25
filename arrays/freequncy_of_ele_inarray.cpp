#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //freequncy of element in array

    int arr[6] ={11,11,1,2,2,3};
    vector<int> hash(14,0);
    for(int i=0;i<6;i++){
       
          
                hash[arr[i]]=hash[arr[i]]+1;
          
        
    }
for(int i=0;i<14;i++){
    cout<<i<<":"<<hash[i]<<endl;
    cout<<endl;
}
}