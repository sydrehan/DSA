#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;

    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            cout << i << endl; // Output each divisor as it's found
        }
    }

    cout << "GCD is: " << gcd << endl; // Output the GCD
    return 0;
}
