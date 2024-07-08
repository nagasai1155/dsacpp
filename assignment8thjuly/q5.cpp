//reverse string using stack data structure in c++

#include<iostream>
#include<stack>
#include<string>

using namespace std;

void reverseString(string str) {
    stack<char> s;
    for(int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }
    string reversed = "";
    while(!s.empty()) {
        reversed += s.top();
        s.pop();
    }
    cout << "Reversed string: " << reversed << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str);
    return 0;
    // Output: Reversed string: olleh
    // Note: This program uses a stack to reverse the string. The time complexity is O(n), where n is the length of the string.
    // The space complexity is O(n), as we are using a stack of size n to store the characters.
    // This implementation is efficient and suitable for reversing small strings.
    // However, if the input string is extremely large, the stack may overflow, causing a runtime error. In such cases, consider using a different approach or data structure to handle larger strings.
    // If you need to reverse a very large string, consider using a more efficient algorithm or data structure, such as a queue or an array.
    // If you need to reverse a string in a multithreaded environment, consider using a thread-safe stack or a thread-safe queue, such as a concurrent stack or concurrent queue.

    // Example usage:
    // string str = "Hello, World!";
    // reverseString(str); // Output: "!dlroW,olleH"
    // string str = "abcdefghijklmnopqrstuvwxyz";
    // reverseString(str); // Output: "zyxwvutsrqponmlkjihgfedcba"
    // string str = "1234567890";
    // reverseString(str); // Output: "0987654321"
    // string str = "";
    // reverseString(str); // Output: ""
    // string str = "a";
    // reverseString(str); // Output: "a"
    // string str = "aa";
    // reverseString(str); // Output: "aa"
    // string str = "ab";
    // reverseString(str); // Output: "ba"
    // string str = "abc";
    // reverseString(str); // Output: "cba"
    // string str = "abcd";
    // reverseString(str); // Output: "dcba"
    //
}