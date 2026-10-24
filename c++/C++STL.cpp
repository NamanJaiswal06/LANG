#include<iostream>
#include<array>
using namespace std;

int main() {
    array<int , 5>a = {1,2,3,4,5};
    int size = a.size();
    for( int i = 0 ; i<size ; i++){
        cout<<a[i] <<endl;
        

    }
    cout<<"element of second index " << a.at(2)<<endl;
        cout<<"element at first index" << a.front() << endl;
        cout<< "element at last index" << a.back() <<endl;
        cout<<"empty or not" << a.empty() << endl;


}