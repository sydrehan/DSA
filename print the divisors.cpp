#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int count=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
 return 0;
}