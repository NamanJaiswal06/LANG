#include<iostream>
using namespace std;
// int factorial(int n){

//     if(n==1)
//     return 1;

//     int smallerProblem = factorial(n-1);
//     int biggerProblem = n * smallerProblem;
//     return biggerProblem;

// }

// int main() {
//     int n;
//     cin>>n;

//     int ans= factorial(n);
//     cout<< ans<<endl;

// }

// int power(int n ){
//     if(n== 0 )
//     return 1;

//     int smaller = power(n-1);
//     int bigger = 2 * smaller;
//     return bigger;

// }


// int main() {
//     int n;
//     cin>>n;
//     int ams = power(n);
//     cout<<ams;

// }

// int print(int n){

//     if(n==0){
//         return;

//     }
//     cout<< n ;

//   print(n-1);
// }


// int main() {

// int n;
// cin>>n;
// print(n);

// }



//                                     SayDigits



// void saydigits( int n , string arr[]){

//   if(n==0) {
//     return;
//   }

//   int digits = n%10;
//    n = n/10;

//    saydigits( n , arr);

//    cout<< arr[digits] << " " ; 
// }

// int main(){
//   string arr[] = {
//     "zero" , "one " , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" 
//   };

//   int n ; 
//   cin>>n;

//   cout<< endl<<endl<<endl;
//   saydigits( n  ,arr);

//   cout<< endl<<endl<<endl;
// }



//                         sorted or not


// bool isSorted( int *arr , int size){

//   if(size == 0 || size ==1){
//     return true;
//   }

//   if(arr[0] > arr[1]){
//     return false;
//   }

//   else{
//     bool remaining  = isSorted(arr +1 , size-1);
//     return remaining;
//   }
// }  


// int main() {
//   int arr[5] = { 2 ,4 , 6 , 8 , 10};

//   int size = 5;

//   bool ans = isSorted( arr , size);



// }


// int findSum(int *arr , int size){
//   if(size == 0){
//     return;

//   }
//   if(size ==1){
//     return arr[0];
//   }

//   int sum = arr[0] + arr[1];

//   int ans = findSum(arr+1 , size-1);
//   return ans;

// }


// int main(){

//   int arr[5] = {2 , 3 ,4, 5, 6};
//   int size = 5;
  
// }

//      binary search


// bool binarySearch(int *arr , int s , int e , int key){
//   if(s>e){
//     return false;
//   }
//   int mid = s +  (e-s)/2;
//   if(arr[mid] == key){
//     return true;

//   }


//   if(arr[mid]>key){
//     return binarySearch(arr , s , mid -1 , key);
//   }

//   if(arr[mid]<key){
//     return binarySearch(arr , mid+1 , e , key);
//   }
// }

// int main() {
//   int  n = 6;
//   int arr[6] = {2,3,4,5,6,8};
//   int key = 4;

//   int ans = binarySearch(arr , 0 , n-1 , key );

//   if(ans){
//     cout<<"true";
//   }
//   else{
//     cout<<"false";
//   }
// }


//                 RECURSION WITH STRINGS


// void reverse(string& s , int i , int j){

   
  
//   if(i>j)
//   return;

//   swap(s[i] , s[j]);
//   i++;
//   j--;
//   reverse(s ,i ,  j);
// }



// int main(){

//   string name = "jaiswal";
//   reverse(name , 0 , name.length()-1);

//   cout<< name<<endl;

// }


// bool palindrome( string s  , int  i , int j){
//   if(i>j)
//   return true ;

//   if(s[i] != s[j] )
//   return false;


//   else{
//    return  palindrome(s , i++ , j--);
//   }
// }


// int main() {

// string name = "naman";

// bool isPalindrome = palindrome( name  , 0 , name.length()-1);

// if(isPalindrome){
//   cout<< " true";
// }
//   else{
// cout<<"false";
  
//   }

// }


// int power( int a , int b){
//   if(b==0){
//     return 1;

//   }

//   if(b==1){
//     return a;
//   }

//   int ans = power( a , b/2);

//   if(b%2 == 0){

//     return ans *ans;

//   }

//   else{
//     return a * ans * ans;
//   }
// }


// void sortArray( int *arr , int n){
//   if(n==0 || n ==1 ){
//     return ;
//   }

//   for(int i = 0 ; i<n-1 ; i++){

//     if(arr[i] >arr[i+1]){
//       swap(arr[i ] , arr[i+1]);
//     }
//   }

//   sortArray(arr , n-1);
// }

//     MERGE SORT

void merge(int *arr , int s  , int e ){
  int mid = s +(e-s)/2;
  int len1 = mid -s +1;
  int len2 = e - mid;
  int *first = new int[len1];
  int *second = new int[len2];


// copy values
int mainArrayIndex = s;
for(int i = 0; i<len1 ; i++){
     first[i] = arr[mainArrayIndex++];

}

 mainArrayIndex= mid+1;
for(int i = 0 ; i<len2 ; i++){
  second[i] = arr[mainArrayIndex++];

}

// merge 2 sorted arrays

int index1= 0;
int index2 = 0;
mainArrayIndex = s;

while(index1<len1 && index2< len2){
  if(first[index1] < second[index2]){
    arr[mainArrayIndex++] = first[index1++];

  }
  else{
    arr[mainArrayIndex++] = second[index2++];
  }
}


while(index1 < len1){
  arr[mainArrayIndex++] = first[index1++];
}

while(index2< len2){
  arr[mainArrayIndex++] = second[index2++];
}

delete []first;
delete []second;
}

void mergeSort( int *arr , int s , int e){

  //base case
  if(s>=e){
    return;


  }

  int mid = s+ (e-s)/2;
  // right side
  mergeSort( arr  , mid +1 , e);

  //left side 
  mergeSort(arr , s , mid);


  //merge
  merge(arr ,  s ,e );

}

int main(){
  int arr[5] = { 2, 5, 1 , 6 , 9 };
  int n = 5;
  mergeSort( arr  , 0 , n-1);

  for(int i = 0 ; i<n ; i++){
    cout<< arr[i] <<" ";

  }
  cout<< endl;
  return 0;
}


