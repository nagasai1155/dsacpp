//give two strings are anagrahms are not in c++

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    string s = "nagasaibalam";
    string s1 = "balamnagasai";
    
    //sort both strings
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    
    //check if sorted strings are equal
    if(s == s1){
        cout << "Strings are anagrams";
    }else{
        cout << "Strings are not anagrams";
    }
    
    return 0;
}

