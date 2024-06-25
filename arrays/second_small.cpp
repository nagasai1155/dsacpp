#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5] = {2,3,4,5,6};
    int small = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i] < small){small = arr[i];
        }
    }
   int ssmall = INT_MAX;
   for(int i=0;i<5;i++){
    if(arr[i]<ssmall && arr[i] != small){
        ssmall = arr[i];
    }
   }
   cout<<ssmall<<endl;

}