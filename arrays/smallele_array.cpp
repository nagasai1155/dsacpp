#include<iostream>
using namespace std;

int main(){
    int arr[5]  ={13,555,333,6779,3};
    int min = arr[0];
    for(int i=1;i<5;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"smallest element: "<<min<<endl;
}