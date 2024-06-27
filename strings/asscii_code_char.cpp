//need to display with ascii code of an character in c++

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value of " << ch << " is " << int(ch) << endl;
    return 0;
}