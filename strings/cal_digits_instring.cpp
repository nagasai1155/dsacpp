

#include <iostream>
#include <string>

using namespace std;

int main(){   //calculate number of digits in the string give in c++

    string str;
    cin>>str;

    int cnt =0;int sum =0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            cnt++;
            sum+=(str[i]-'0');
        }
    
}
cout<<cnt<<"sums of digits"<<sum<<endl;
}