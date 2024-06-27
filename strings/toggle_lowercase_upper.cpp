

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//toggle a string into uppder case to lower case in c++

int main() {
    string str;
    
    getline(cin,str);
    for (int i = 0; i < str[i] !='\0'; i++) {  //'\0' =>is null 
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    cout <<"toggle string is :"<< str << endl;
    return 0;
}