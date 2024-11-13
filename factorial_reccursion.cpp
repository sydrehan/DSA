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