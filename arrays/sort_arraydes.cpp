#include<iostream>
using namespace std;

int main(){
   //sorting an array in ascending order

   int arr[5]={45,1,8,82,23};
   int min=arr[0];
   for(int i=0;i<5;i++){
     for(int j=i+1;j<5;j++){
        if(arr[i]<arr[j]){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
        }
     }


     
   }
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }
}