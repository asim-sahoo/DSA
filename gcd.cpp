/*
1. Start with two non-negative integers, m and n.
2. If n is 0, then the GCD is m.
3. Otherwise, compute the remainder of m divided by n: r = m % n.
4. Replace m with n and n with r.
5. Repeat from step 2 until n becomes 0.
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

int main() {
    int num1, num2;
    
    cout << "Enter a number: ";
    cin >> num1;
    
    cout << "Enter another number: ";
    cin >> num2;
    
    if (num1 < 0 || num2 < 0) {
        cout << "Both numbers should be non-negative." << endl;
    } else {
        int result = gcd(num1, num2);
        cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    }
    
    return 0;
}
