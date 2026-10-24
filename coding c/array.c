#include<stdio.h>
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
// int main () {
//     int age = 22;
//     int *ptr= &age;
//     printf("%u\n", ptr);
//     ptr++;
//     printf("%u\n", ptr);
//     ptr--;
//     printf("%u\n", ptr);
//     return 0;
// }
// int main() {
//     float price = 20.00;
//     float *ptr = &price;
//     printf( "ptr is = %u\n", ptr );
//     ptr++;
//     printf( "ptr is = %u\n", ptr );
//     ptr--;
//     printf( "ptr is = %u\n", ptr );
//     return 0;
// }
// int main () {
//     char star = '*';
//     char *ptr = &star;
//     printf("ptr is = %u\n", ptr);
//     ptr++;
//     printf("ptr is = %u\n", ptr);
//     return 0;


// }
// int main () {
//     int age1 = 55;
//     int age2 = 69;
//     int *ptr1 = &age1;
//     int *ptr2 = &age2;
//     printf("age1 = %u\n", ptr1);
//         printf("age2 = %u\n", ptr2);
//         printf("ptrm2 = %u\n ", ptr1 - ptr2);
//         printf("comparison is = %u\n", ptr1 == ptr2);
//         return 0;

// }
// int main () {
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for(int i = 0; i <5 ; i++) {
//         printf("%d index :" , i);
//         scanf("%d",  &aadhar[i]);
//     }

//     for(int i = 0; i < 5; i++) {
//         printf("%d index = %d\n", i , aadhar[i]);
        
//     }
//     return 0;
// }
// void printNumber( int arr[] , int n);

// int main () {
//     int arr[] = {1 , 2 , 3 , 4 , 5 , 6 , 7};
//     printNumber(arr , 7);
//     return 0;






// }
// void printNumber( int arr[] , int n) {
//     for(int i = 0; i < n ; i++) {
//         printf(" %d\t", arr[i]);
//     }

// }
// int countodd(int arr[] , int n);

// int main () {

//     int arr[] = { 1 , 2 , 3 ,4 , 5 , 6 , 7 , 8 ,9 , 10 , 11};
//     printf("%d", countodd(arr , 11));
//     return 0;



// }
// int countodd(int arr[], int n) {
//     int count = 0;
//     for(int i = 0 ; i < n ; i ++) {
//         if( arr[i] % 2 != 0) 

        
//         {
//             count ++;
//         }
        
//     }
//     return count;
// }
// void revrese(int arr[] , int n);
// void printArr( int arr[] , int n);

// int main () {
//     int arr[] = { 1 , 2 , 3, 4 , 5};
//     reverse( arr , 5);
//     printArr(arr , 5);
//     return 0;



// }
// void reverse(int arr[] , int n) {
//     for(int i = 0; i<n/2 ; i++) {
//         int First = arr[i];
//         int Second = arr[n-i-1];
//         arr[i] =  Second;
//         arr[n-i-1] = First;

//     }
// }
// void printArr( int arr[] , int n) {
//     for(int i = 0; i < n ; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }







// int main () {
//     int n;
//     printf(" enter n = ");
//     scanf("%d",&n);
//     int fib[n];
//      fib[0] = 0;
//      fib[1] = 1;
//     for(int i = 2 ; i <= n ; i++) {
//         fib[i] = fib[i-1] + fib[ i - 2];
//         printf(" %d \t", fib[i]);
//     }

//     return 0;
// }

// void storetables( int arr[][10] , int n , int m , int number);

// int main () {

// int tables[2][10];
// storetables( tables , 0 , 10 , 2);
// storetables( tables , 1 , 10 , 3);
// for(int  i = 0 ; i < 10 ; i++) {
// printf("%d\t" , tables[0][i]);
// }
// printf("\n");
// for(int  i = 0 ; i < 10 ; i++) {
// printf("%d\t" , tables[1][i]);
// }
// return 0;





// }

// void storetables( int arr[][10] , int n , int m , int number) {
//     for(  int i = 0 ; i < m ; i++) {
//         arr[n][i]= number * (i+1);

// }
// }

