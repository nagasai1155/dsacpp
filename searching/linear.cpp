#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int  arr[]={3,4,8,1,9};
    int item = 4;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<len<<endl;
    for(int i=0;i<len;i++){
        if(arr[i]== item){
            cout<<arr[i]<<"found at "<<i<<endl;
        }
    }
}