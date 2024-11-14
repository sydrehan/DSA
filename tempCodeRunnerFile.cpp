#include<iostream>
#include<string>
using namespace std;
int count=1;
void print(){
    if(count==8) return;
    cout<<count<<endl;
    count++;
    print();
}
int main()
{
    print();
 return 0;
}