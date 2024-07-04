#include<iostream>
using namespace std;


int fact(int n){
    if(n> 1){
        return n * fact(n-1);
    }else{
        return 1;
    }
}
int main(){


    int n;
    cout<<"enter positive number: ";
    cin>>n;
    int result = fact(n);
    cout<<result<<" ";
}