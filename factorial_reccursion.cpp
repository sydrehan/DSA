
// Factorial recursion is a method to calculate the factorial of a number using a function that calls itself. Factorial is defined as the product of an integer and all the integers below it, down to 1. It's denoted by n!

#include<iostream>
#include<string>
using namespace std;
int factorial(int n){
    if(n==0) return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact=factorial(n);
    cout<<"Factorial is : "<<fact;
 return 0;
}

// A bigger approach with better understanding

// #include <iostream>
// #include <string>
// using namespace std;

// long long factorial(int n) {
//     if (n <= 1) return 1; // Base case: 0! = 1! = 1
//     return n * factorial(n - 1); // Recursive case
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         long long fact = factorial(n);
//         cout << "Factorial is: " << fact << endl;
//     }
//     return 0;
// }