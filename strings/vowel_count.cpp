//write a code for vowel count of a give stirng in c++
#include<bits/stdc++.h>
using namespace std;

int main(){



    string str ;
    cin>>str;

    int vowelcnt =0;
    for(int i=0;str[i] != '\0';i++){
        if(str[i] =='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            vowelcnt++;
        }
    }
    cout<<vowelcnt<<endl;
    return 0;
}





