#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int rev=0;
    int dup=n;
    while(n>0){
        int ls=n%10;
        rev=rev*10+ls;
        n/=10;
    }
    if(dup==rev)cout<<"palindrom";
    else cout<<"not";
 return 0;
}