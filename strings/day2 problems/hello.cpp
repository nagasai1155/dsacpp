//freq of char in given string
#include<iostream>
using namespace std;
int main()
{
             string s ="nagasaibalam";
             int arr[256]={0};
             for(int i=0;i<s.length();i++){
                arr[s[i]]++;
             }
             for(int i=0;i<256;i++){
                if(arr[i] !=0 ){
                    cout<<char(i)<<" "<<arr[i]<<endl;
                }
             }
}