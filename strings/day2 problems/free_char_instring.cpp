#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    string str1 = "nadai";
        int arr[256]={0};

    for(int i=0;i<str1.length();i++){
        arr[str1[i]]++;
    }
    for(int i=0;i<256;i++){
        if(arr[i] !=0){
            cout<<char(i)<<"= "<<arr[i]<<endl;
        }
    }
}