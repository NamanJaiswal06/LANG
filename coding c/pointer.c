#include<stdio.h>
// int main () {
//     int age = 22;
//     int *ptr = &age;
    
//     int _age = *ptr;
//     printf("%d\n", _age);
//     adress
//     printf("%p\n", &age);
//     printf("%u\n", ptr);
//     printf("%u\n", &age);
//     printf("%u\n", &ptr);
    
//     printf("%d\n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));
    

//     return 0;

// }
// void square(int n);

// int main () {
// int number= 4;
// square(number);
// printf("number is= %d\n", number); here number is called so its value is not changed
// return 0;
// }
// // call by value
// void square ( int n) {
//     n = n * n;
//     printf("square is = %d\n", n);
  
// }
// void square( int n);
// void _square( int *n);

// int main() {
//     int number = 4;
//     square(number);
//     printf("number is = %d\n", number);

//     _square(&number);
//     printf("number is = %d\n", number);
//     return 0;
    
// }
// void square( int n) {
//      n = n * n;
//      printf("square is = %d\n", n);
    
// }
// void _square( int *n){
//     *n = (*n) * (*n);
//     printf("square is = %d\n", *n);
// }



// swaping by call 3by value
// void swap(int a   , int b );
// int main () {
// int x = 3;
// int y = 5;
// swap( x , y);
// printf("x is = %d & y = %d", x , y);
// return 0;
// }

// void swap( int a , int b) {
//     int t;
    
//     t = a;
//     a =b;
//     b = t;
//     printf("a = %d & b = %d\n", a , b  );
// }
//call by refrence
// void swap(int a   , int b );
// void _swap( int *a, int *b);
// int main () {
// int x = 3;
// int y = 5;
// _swap (&x , &y);
// printf(" x is = %d & y is = %d", x , y);
// return 0;
// }



// void _swap(int *a, int *b){
//     int t = *a;
// *a= *b;
// *b = t;

// }
// void dowork(int a , int b ,int *sum , int *prod , int *avg);
// int main () {
//     int a = 3;
//     int b = 5;
//     int sum , prod , avg;
//     dowork(a , b , &sum , &prod , &avg);
//     printf("sum is %d , prod is %d , avg is %d", sum , prod , avg);
//  return 0 ;   
// }
// void dowork(int a , int b , int *sum , int *prod , int *avg){
//      *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b)/ 2;
// }


// void _max( int*a ,int  *b);
// int main () {
//     int a= 4;
//     int b= 6;
//  _max( &a , &b) ;
 




//     return 0 ;
// }

// void _max( int *a , int *b) {
//     if(*a > *b ) {
//         printf(" maximum is %d\n",*a);
//     }
//     else{
//         printf("maximum is %d", *b);
// }
// }
// int main() {
//     int items[3];
//     printf("price of apple is");
//     scanf("%f",&items[0]);

//     printf("price of condom is");
//     scanf("%f",  &items[1]);

//     printf("price of banana is ");
//     scanf("%f", &items[2]);

//     printf("final price of aple :%f",  items[0] * (items[0] * 0.18));
// printf("final price condom :%f",  items[1] * (items[1] * 0.18));
// printf("final price banana :%f",  items[2] * (items[2] * 0.18));
// return 0;
// }
