#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=(rev*10)+lastdigit;
        n=n/10;
    }
    cout<<rev;

 return 0;
}