#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int count=0;
    while(n>0){
        int lastdigit=n%10;
        count=count+1;
        n=n/10;
    }

    cout<<"Frequeency is: "<<count;
 return 0;
}