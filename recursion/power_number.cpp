#include<iostream>
using namespace std;

int powerofanumber(int n,int m){
    if(m==0) return 1;
      else {
        int nn= n*powerofanumber(n,m-1);
        return nn;
      }
    //base case: when n=0, return 1
    //recursive case: n*powerofanumber(n-1)
    //this function calculates the power of a number using recursion
}
int main(){


    int n,m;
    
    cin>>n>>m;
    //power of number  using recursion in c++
    int nn= powerofanumber(n,m);
    cout<<nn<<" ";
    return 0;
   

   
}
