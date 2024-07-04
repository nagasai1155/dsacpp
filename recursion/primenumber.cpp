#include<iostream>
using namespace std;

bool primeornot(int n,int i=2){
    if(n<=2) (n==2) ?true:false;
     if(n%i==0) return false;
     if(i*i>n) return true;
     return primeornot(n,i+1);
}
int main(){

    int n;
    cin>>n;
    if(primeornot(n)){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
}