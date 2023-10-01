#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return 1; // Exit with an error code
    }

    int fib1 = 0, fib2 = 1;
    std::cout << "Fibonacci series up to n = " << n << ":" << std::endl;

    if (n >= 1) {
        cout << fib1 << " ";
    }
    if (n >= 2) {
        cout << fib2 << " ";
    }

    for (int i = 3; i <= n; ++i) {
        int fibNext = fib1 + fib2;
        cout << fibNext << " ";
        fib1 = fib2;
        fib2 = fibNext;
    }

    return 0; // Exit normally
}

