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

// Another approach
/*
#include<iostream>
#include<string>
using namespace std;
void print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}

int main()
{
    int n=10;
    print(1,n);
 return 0;
}
*/