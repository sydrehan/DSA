#include<iostream>
#include<string>
using namespace std;
int cnt=1;
void print(int n){
    if(cnt>n)return;
    cout<<cnt<<" ";
    cnt++;
    print(n);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
    cout<<endl;
    return 0;
}