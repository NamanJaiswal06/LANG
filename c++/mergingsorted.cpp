#include<iostream>
using namespace std;


void merge(int arr1[] , int arr2[], int arr3[] , int m , int n){
    int i = 0; 
    int j = 0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]< arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k] = arr1[i];
        i++;
        k++;

    }
    while(j<m){
        arr3[k]= arr2[j];
        j++;
        k++;
    }

    
}
void print(int arr[] , int n){
for( int l = 0 ; l<n; l++){
    cout<< arr[l] << endl;
}
}




int main () {
    int arr1[5]= { 1, 3, 5 ,7 , 9};
    int arr2[3]= { 2 , 4 ,6};
    int arr3[8]= {0};
    merge(arr1 , arr2, arr3, 5 , 3);
    print(arr3 , 8);

}