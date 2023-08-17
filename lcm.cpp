/*
1. Read two non-negative integers a and b.
2. Calculate the GCD of a and b using the Euclidean Algorithm or any other appropriate method.
3. Calculate the LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b).
4. Display the calculated LCM.
*/

#include <iostream>
using namespace std;

int gcd(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    if (num1 < 0 || num2 < 0) {
        cout << "Both numbers should be non-negative." << endl;
    } else {
        int result = lcm(num1, num2);
        cout << "The LCM of " << num1 << " and " << num2 << " is: " << result << endl;
    }

    return 0;
}
