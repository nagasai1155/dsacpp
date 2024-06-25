#include<iostream>
using namespace std;

int main(){
    //sort an array as first half as ascending and second halp in descending order
    int arr[4] = {100,20,30,500};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mid1 = n/2;
    for(int i=0;i<mid1;i++){
        for(int j=i+1;j<mid1;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] =arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=mid1;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] =arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"sorted half array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}