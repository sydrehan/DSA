#include<iostream>
#include<string>
using namespace std;
void print(int i, int n){
    if(i<n) return;
    cout<<i<<endl;
    print(i-1,n);
}
int main()
{
    int i=10;
    print(i,1);
 return 0;
}