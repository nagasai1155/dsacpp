//find length of string without strlen in c++

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    int count = 0;
    for (int i = 0; i < str.length(); i++) { //str[i] != '\0'=>null 
        if (str[i] != ' ') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}