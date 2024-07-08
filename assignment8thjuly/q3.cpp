//gcd of two numbers using recusion in c++;
#include <iostream>

using namespace std; // Add this line

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is " << result << endl;

    return 0;
}
