//check if give string is palindrome or not in c++ 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    string str;
    cin>>str;

    int n=str.length();
    int i=0;
    int j=n-1;
    while(i<j){
        if(str[i]!=str[j]){
            cout<<"not palindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"palindrome";
    return 0;
}