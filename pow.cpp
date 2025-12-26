#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long power = n;
    
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    double result = 1;

    while (power > 0) {
        if (power % 2 == 1)
            result *= x;
        x *= x;
        power /= 2;
    }

    return result;
}

int main() {
    double x;
    int n;
    cin >> x >> n;
    cout << myPow(x, n);
    return 0;
}
