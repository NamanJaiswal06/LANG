/*#include<stdio.h>
void printhello ();
void printgoodbye();
int main () {
   printhello ();
   printgoodbye ();


    return 0;


}
void printhello() {
    printf("hello");
    
}
void printgoodbye() {
    printf("goodbye");
}*/
/*#include<stdio.h>
void namaste ();
void bonjour ();
int main () {
    printf("enter for french i for indian :");
    char ch;
    scanf("%c", ch);
    if(ch== 'i') {
namaste();
    }
    else{
        bonjour ();
    }
    return 0;
}
void namaste() {
    printf("namaste");
}
void bonjour() {
    printf("bonjour");
}*/
// #include<stdio.h>
// void printHW(int count);
// int main () {
//     printHW(6);
//  return 0;   
// }

// void printHW(int count){
//     if ( count == 0) {
//         return;
//     }
//     printf("Hello World \n");
//     printHW(count-1);
// }
// #include<stdio.h>
// int fact(int n);

// int main () {
// printf("factorial is : %d \n", fact(5));

//     return 0;

// }

// int fact(int n) {
//     if(n ==0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * fact(n);
//     return factN;
// }
// #include<stdio.h>

// float convertTemp(float celcius);




// int main () {
//     float far = convertTemp(37);
//     printf("far : %f", far);


// return 0 ;
// }

// float convertTemp( float celcius) {
//     float far = celcius * (9.0/5.0) + 32;
//     return far;
// }

// #include<stdio.h>
// float maths( float m);
// float science(float sc);
// float sanskrit(float sa);
// int main () {
//     float percentage;
// float mmt= maths(56);
// float sc = science(78);
// float sa = sanskrit(90);
// printf("percentage : %f", percentage= (mmt + sc + sa)/3);


//     return 0;
// }
// float maths( float m) {
//     float mmt= m;
//     return mmt;
// }
// float science ( float sc) {
//     float scc= sc;
//     return scc;

// }
// float sanskrit(float sa){
//     float sanskrit= sa;
//     return sa;

// #include<stdio.h>
// int fib(int n);
// int main () {
//     fib(9);
//     printf("%d", fib(9));



//     return 0;

// }
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
// int fibNm1= fib(n -1);
// int fibNm2 = fib(n -2);
// int fibN = fibNm1 + fibNm2;
// return fibN;
// }