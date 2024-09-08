#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int sum=0;
    int dup=n;
    while(n>0){
        int ls=n%10;
        sum=sum+ls*ls*ls;
        n/=10;
    }
    if(dup==sum)cout<<"armstrong";
    else cout<<"not";

 return 0;
}