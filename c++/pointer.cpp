#include<iostream>
using namespace std;

int getsum(int arr[] , int n){

    cout<< endl << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0 ; i<n; i++){
        sum+=arr[i];

    }
    return sum;

}



int main() {
    // int num = 5;
    // int *ptr = &num;
    
    // cout<< *ptr<<endl;

    // int arr[10] = { 1, 2, 3, 4, 5};
    // cout<<"sum is" << getsum(arr , 5)<<endl;
    int i = 5;
    int* p = &i;
    int** p2 = &p; 


    return 0;

}