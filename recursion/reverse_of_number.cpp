#include<bits/stdc++.h>
using namespace std;

int reversenumber(int n){
    if(n<10) return n;
    else{
        cout<<n%10;
        reversenumber(n/10);
    }
  
}
int main(){
    int n;
    cin>>n;
    cout<<reversenumber(n);
}