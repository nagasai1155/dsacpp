#include<bits/stdc++.h>
using  namespace std;

bool isPalindrome(int num){
    int rem =0;
    int temp = num;

    while(temp > 0){
        int reb= temp%10;
        rem = rem*10 + reb;
        temp /=10;
    }
    if(num == rem) return true;
    else return false;
}
int main(){
    int arr[] = {1,121,545545,2225};
    int res = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(isPalindrome(arr[i] )&& arr[i] >res){
            res = arr[i];
        }
    }
    cout<<res<<endl;
}