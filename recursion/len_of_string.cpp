#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int len(char * str){
    if(*str=='\0') return 0;
    else return 1+len(str+1);
}
int main(){

    char str[] = "nagasai balam";
    cout<<len(str);
}