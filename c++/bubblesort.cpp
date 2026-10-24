#include<iostream>
using namespace std;



int bubblesort(int arr[] , int n) {

    for( int i = 0; i<n ; i++){
        for( int j = 0 ; j<n - i -1; j++){
            if( arr[j]>arr[j+1]){

                swap(arr[j] , arr[j+1]);
            }
            else{
                arr[j]= arr[j];
            }
        }
    }
    for( int i = 0 ; i< n ; i++){
        cout<< arr[i]<<endl;
    }

}


int main() {


    int arr[5] = {3,9,8,11,4};
    bubblesort(arr , 5);
}