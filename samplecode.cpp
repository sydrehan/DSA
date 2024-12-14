#include <iostream>
#include <string>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1; // Base case: 0! = 1! = 1
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        long long fact = factorial(n);
        cout << "Factorial is: " << fact << endl;
    }
    return 0;
}
