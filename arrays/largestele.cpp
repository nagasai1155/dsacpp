#include<iostream>
using namespace std;

int main(){
    //find largest element in array
    int arr[5] ={3,5555,533,1555,2};
    int max = arr[0];
    for(int i=1;i<5;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

cout<<"largest: "<<max<<endl;
}