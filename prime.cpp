#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    
    if(n<=1){
        cout<<"not";
        return 0;
    }
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
                cout<<"prime";
            }
            else{
                cout<<"not prime";
            }
 return 0;
}