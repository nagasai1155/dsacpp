#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements :";
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}