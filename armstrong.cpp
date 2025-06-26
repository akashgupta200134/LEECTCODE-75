#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;

    // Count number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
