

#include <iostream>
#include <string>
using namespace std;

int main() {//find length of string without strlen in c++
    string str;
    cin>>str;
    int count = 0;
    for (int i = 0; str[i] !='\0'; i++) { //str[i] != '\0'=>null 
        if (str[i] != ' ') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}