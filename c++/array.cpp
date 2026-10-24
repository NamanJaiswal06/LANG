#include<iostream>
using namespace std;

// int main() {
//     int arr[15];
//     cout<< arr[4]<<endl;
//      int one[3] = { 1 , 2, 3};
//      cout<<one[0]<<endl;

//      int second[15] = {1 , 3, 5 , 7};
//      int n = 15;
//      for(int i = 0; i < n; i++) {
//         cout<<second[i]<<endl;
//      }
//      int third[15] = {0};
//       int m= 15;
//      for(int i = 0; i < m; i++) {
//         cout<<third[i]<<endl;
// }
// }

// void printArray ( int arr[] , int size){
//     cout<< "printing the array" << endl;
//     for( int i= 0; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"PRINTING DONE"<< endl;
//     }

//     int main() {
//         int arr[10] = {1, 2, 3, 4,};
//         printArray(arr, 10);
//         int arrsize = sizeof(arr)/sizeof(int);
//         cout<< arrsize<<endl;
//     }

// int getMin( int num[] , int n){
//     int min = INT8_MAX;
//     for( int i =0 ; i<n ; i++){
//         if(num[i] < min){
//             min = num[i];
//         }
//     }
//     return min;
// }
// int getMax( int num[] , int n){
//     int max = INT8_MIN;
//     for( int i =0 ; i<n ; i++){
//         if(num[i] > max){
//             max = num[i];
//         }
//     }
//     return max;
// }

// int main() {
//     int size;
//     cin>>size;
//     int arr[100];
//     for(int i = 0; i < size; i++) {
//         cin>>arr[i];
//     }
//     cout<< getMax( arr , size)<<endl;
//     cout<<getMin(arr , size)<<endl;

// }

// void update( int arr[], int n){

//     arr[0]= 120;
//     cout<< "Printing in function"<<endl;
//     for( int i = 0; i<n ; i++) {
//         cout<<arr[i]<< " ";

//     }
//     cout<<"entering main function" << endl;

// }

// int main() {
//     int arr[3] = {1, 2 ,3 };
//     update( arr, 3);
//     for( int i = 0; i<3 ; i++){
//         cout<< arr[i]<<" ";

//     }
// }

// int main() {
//     int size;
//     cin>> size;
//     int arr[100];
//     for( int i = 0 ; i<size ; i++ ){
//         cin>>arr[i];

//     }
//    int  ans = 0;
//    for ( int j = 0; j<size ; j++){
//     ans = ans+ arr[j];
//    }
//    cout<< "sum is  " << ans<<endl;

// }
// bool search(int arr[] , int size , int key){
//     for( int i = 0 ; i<size ; i++) {
//         if( arr[i] ==key){
//             return 1;
//         }
//     }
//     return 0;
// }


// int main() {
//     int arr[10] ={ 1 , 2, 4 ,6 , 7, 33 , 24 , 12 , 52 , 93};
//     int n;
//     cin>>n;

//     bool found = search(arr , 10 , n);
//     if(found) {
//         cout<<"key is present" << endl;

//     }
//     else{
//         cout<<"key is absent"<< endl;
//     }
// }

void reverse(int arr[] , int n) {
    int start = 0;
    int end = n-1;
    while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
}
}
void print(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] << " ";

    }
}




int main() {
    int arr[6] = { 1, 2, 3 , 4 , 5 , 6};
    int brr[5] = {1 , 2 ,3 ,4 ,5 };
    
    reverse(arr , 6);
    reverse(brr , 5);
    print(arr , 6);
    cout<<endl;
    print(brr , 5);
}