#include <bits/stdc++.h>
using namespace std;



int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string post) {
    stack<char> st;
    string result = "";
    for (int i = 0; i < post.length(); i++) {
        char c = post[i];
        //this else condition for the checking the operand
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            result += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        } 
        //this else condition for the checking the operator 
        else {
            while (!st.empty() && prec(c) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
}

int main() {
    string s = "(p+q)*(c-d)";
    string infixToPostfix1 = infixToPostfix(s);
    cout << "infix: " << s << endl;
    cout << "infix to postfix: " << infixToPostfix1 << endl;
    return 0;
}
