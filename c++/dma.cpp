#include<iostream>
using namespace std;
int getSum(int *arr , int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum+= arr[i];
    }
    return sum;
}

int main() {

//     char ch = 'q';
//     cout<<sizeof(ch)<< endl;

//     char* c = &ch;
//     cout << sizeof(c) <<endl;


//    int n;
//    cin>>n;
//    int* arr = new int[n];

//    for(int i=0 ; i<n ; i++){
//     cin>> arr[i];
//    }
//    int ans = getSum(arr , n);
//    cout<< ans << endl;

// int n ;
// cin>>n;
// int** arr = new int*[n];
// for(int i = 0 ; i<n; i++){
//     arr[i] = new int[n];
// }
// for(int i=0 ; i<n ; i++){
//     for(int j=0 ; j<n ; j++){
//         cin>>arr[i][j];
//     }
    
// }

// for(int i=0 ; i<n ; i++){
//     for(int j=0 ; j<n ; j++){
//         cout<<arr[i][j];
//     }
    
// }
int row;
int col;
int** arr = new int*[row];
for(int i = 0 ; i<row; i++){
    arr[i] = new int[col];
}
for(int i=0 ; i<row ; i++){
    for(int j=0 ; j<col ; j++){
        cin>>arr[i][j];
    }
    
}

for(int i=0 ; i<row ; i++){
    for(int j=0 ; j<col ; j++){
        cout<<arr[i][j];
    }
    
}
//releasing memory


for(int i = 0 ; i<row ; i++){
    delete [] arr[i];
}

delete []arr;


}