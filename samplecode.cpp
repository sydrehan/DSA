#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter a num: ";
    cin>>n;
    int count=0;
    while(n>0){
        int ld=n%10;
        count=count+1;
        n=n/10;
    }
    cout<<count<<endl;
 return 0;
}