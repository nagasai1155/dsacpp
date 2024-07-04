#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getHcf(int a,int b){
    return b==0? a:getHcf(b,a%b);
}
int main(){

int  num1=96,num2=56;
int  HCF = getHcf(num1,num2);
cout<<HCF;
    return 0;
}