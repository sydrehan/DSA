#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    cout<<"The Vectors using iterator are: ";
    for(vector<int>::iterator it=vec.begin();it!=vec.end();++it){
        cout<<*it;
    }
    cout<<endl;
}