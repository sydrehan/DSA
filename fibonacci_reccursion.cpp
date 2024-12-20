// The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones. The sequence typically starts with 0 and 1

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) 
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fibo = fibonacci(n);
    cout << "The Fibonacci of " << n << " is " << fibo << endl;
    return 0;
}
