//non repeating char of a string in c++

#include<iostream>
#include<string>
using namespace std;

int main(){


    string s;
    cin>>s;
    int count[26]={0};//hashing 
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]-'a']==1){
            cout<<s[i]<<endl;
           
        }
    }
    return 0;
}