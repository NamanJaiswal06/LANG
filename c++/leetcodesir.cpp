#include<iostream>
#include<math.h>
using namespace std;
// int main () {
//     int n;
//     cin>>n;
//     int sum = 0;
//     int prod = 1;

//     while(n!=0){
//         int digit = n % 10;
//         sum = sum + digit;
//         prod = prod * digit;
//         n = n/10;

//     }
//     int answer = prod - sum ;
//     cout<< answer;
//     return answer;
// }
int main () {
    int n;
    cin>>n;
    int ans = 0;
    int max = -pow(2 ,31 );
    int min = pow( 2 , 31) - 1;
    while( n != 0) {
        int digit = n %10;
            if ( ( ans > max/10) || (ans< min/10)){
            ans = ( ans *10) + digit;
            n = n/10;
        }
    
    }
    cout << ans;
 }
// int main () {
//     int n;
//     cin >>n;
//     int mask = 0;
//     if(n==0){
//         return 1;
//     }
//     while( n != 0){
//         mask = (mask<<1) | 1;
//         n = n>>1;
        
//     }
//     int ans = (~n) & mask ;
//     cout<<ans;
// }
// int main() {
//     int n ;
//     cin>>n;
//     for( int i = 0 ; i<= 30 ; i++){
//         int ans = pow( 2 , i);
//         if( ans == n){
//             cout<< " true"<< endl;
//             break;
//         }
        
//     }
    
     

    
    
