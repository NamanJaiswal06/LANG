#include<iostream>
#include<math.h>
int chut ( int n);
int main ()
 {
int n;
chut( 32);
return 0;






 }

 int chut ( int n ){


        for( int i = 0 ; i<= 30 ; i++){
        int ans = pow( 2 , i);
        if( ans == n){
            
            return true;
        }
        
    }

    return false;

 }





