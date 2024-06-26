
#include<bits/stdc++.h>

using namespace std;

int main(){


    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int evencnt =0;
    int oddcnt =0;

    for(int i=0;i<arr.size();i++){
        
        if(arr[i]%2 ==0){
            evencnt++;
        }
        if(arr[i] %2==1) oddcnt++;
    }

    cout<<"even count : " <<evencnt<<"oddcount : "<<oddcnt<<endl;
}
