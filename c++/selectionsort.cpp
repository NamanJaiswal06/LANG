#include<iostream>
using namespace std;
int selectionSort(int arr[] , int n){
    for( int i = 0 ; i<n-1 ; i++){

        int minIndex=i;
        for(int j= i+1 ; j<n ; j++){
            if(arr[j]< arr[minIndex] ){
                minIndex =j;
            }
        }
        swap(arr[i] , arr[minIndex]);
    }

    for(int k = 0 ; k<n; k++){
        cout<< arr[k];
    }
}



int main ()
{
   int arr[4]={ 3 , 5, 1 , 2};

selectionSort(arr , 4);


}