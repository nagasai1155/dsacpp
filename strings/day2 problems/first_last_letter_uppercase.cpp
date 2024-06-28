//first and last letter of à string should be in capital letter in c++

#include <iostream>

using namespace std;

int main() {
    string str="nagasai balam";
    

    for(int i=0;i<str.length();i++){

        if(i ==0 || i== str.length()-1){
            str[i] = toupper(str[i]);
        }else if(str[i]==' '){
            str[i-1]=toupper(str[i-1]);
str[i+1]=toupper(str[i+1]);
        }
    }
    cout<<str<<" ";
}

