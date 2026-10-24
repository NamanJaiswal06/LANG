#include<iostream>
using namespace std;

// int main () {
//     int a , b ;
//     cout<< "enter a:" << endl;
//     cin>>a;
//     cout<< "enter b:" << endl;
//     cin>>b;
//     int ans = 1;
//     for( int i =1 ; i<=b ; i++){
//         ans = ans *a;
//     }
//     cout<< "ans is "<< ans << endl;

// }
 
//  int power () {
//     int a , b;
//     cin>>a>>b;
//     int ans = 1;
//     for ( int i =1 ; i<=b ; i++){
//         ans = ans *a;
//     }
//     return ans;
//  }
//  int main() {
//     int answer = power();
//     cout<< "ans is "<< answer << endl;
//     answer = power();
//     cout<< "ans is "<< answer << endl;
//  }
// bool isEven(int a) {
//     if (a&1) {
//         return 0;}
//         else{
//             return 1;
//         }
//     }
//     int main () {
//         int num;
//         cin>> num;
//        if(isEven(num)) {
//         cout<< "num is even" << endl;
//        }
//         else{
//             cout<< "num is odd" << endl;
//         }
//        }

// int fact(int n){
    
//     int ans = 1;
//     for(int i = 1; i <= n; i++){
//         ans = ans *i;

    
//     }
//     return ans;
// }
//    int nCr(int n , int r){
//     int num = fact(n);
//     int deno= fact(r) * fact(n-r);
//     return num/deno;
//    }
//    int main () {
//     int n , r;
//     cin>> n >> r;
//     cout<< "answer is " << nCr(n,r) << endl;
//    }

// void count( int n) {
//     for( int i = 1; i<=n ; i++){
//         cout<< i<< " ";
//     }
// }

// int main () {
//     int n;
//     cin>>n;
//     count(n);
// }

// bool isPrime(int n) {
//     for( int i = 2 ; i<n ; i++){
//         if(n % i == 0){
//             return 0;
//         }
        
//     }
//     return 1;
// }

// int main () {
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<< "prime number" << endl;
//     }else{
//         cout<< "not prime number" << endl;
//     }
// }


//*******************************************PAss BY VALUE*********************************************************************



void dummy(int n){
    n++;
    cout<< " n is " << n<<endl;
}

int main() {

    int n;
    cin>>n;
    dummy(n);
    cout<< "NUMBER IS" << n<<endl;
}