#include<iostream>
using namespace std;

int largest(int n, int arr[]){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){

int arr[] ={34,2,87,9,1,6};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<largest(n,arr);

}