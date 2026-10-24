// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){
//     int start=0;
//     int end= size-1;
//    int mid= start +(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;

//         }
//         if(key>arr[mid]){
//             start=mid +1;
            

//         }
//         else{
//             end=mid-1;
          
//         }
//         mid= start +(end-start)/2;
//     }
//     return -1;


// }


// int main(){
//     int arr[6]={2,4,6,8,9,21};
//   int index = binarySearch(arr , 6 , 8);
//   cout<< index;
// }
// #include<iostream>
// using namespace std;

// int firstOcc( int arr[],int n, int key){
//    int start= 0;
//    int end= n-1;
//    int mid= start + (end-start)/2;
//    int ans=-1;
//    while(start<=end){
//    if(arr[mid]==key){
//    ans=mid;
//    end = mid-1;
//    }
//    else if(arr[mid]>key){
//     end = mid-1;
//    }
//    else if(arr[mid]<key){
//     start= mid +1;
//    }
//    mid= start + (end-start)/2;
//   }
//   return ans;
// }
// int lastOcc( int arr[],int n, int key){
//   int start= 0;
//   int end= n-1;
//   int mid= start + (end-start)/2;
//   int ans=-1;
//   while(start<=end){
//   if(arr[mid]==key){
//   ans=mid;
//   start= mid+1;
//   }
//   else if(arr[mid]>key){
//    end = mid-1;
//   }
//   else if(arr[mid]<key){
//    start= mid +1;
//   }
//   mid= start + (end-start)/2;
// }
// return ans;
// }





// int main() {
//   int arr[11]={1,1,2,2,3,3,4,4,4,5,6};
//   cout<< "first position is at index "<< firstOcc(arr, 11 , 4)<<endl;
//   cout<< "last position is at index "<< lastOcc(arr, 11 , 4)<<endl;
  

// }
// #include<iostream>
// using namespace std;

// int peak(int arr[] , int n ){
//   int s = 0;
//   int e= n-1;
//   int mid= s+ (e-s)/2;
//   while (s<e
    
//   )
//   {
//     if(arr[mid]<arr[mid+1]){
//       s= mid+1;
//     }
//     else{
//       e= mid;
//     }
//     mid= s + (e-s)/2;
//   }
//   return s;
  
// }


// int main() {
//   int arr[4]={1,2,6,1};
//   cout<<peak(arr, 4)<<endl;
// }

// #include<iostream>
// using namespace std;

// int pivot( int arr[], int n){
//   int s = 0;
//   int e = n-1;
//   int mid = s = (e-s)/2;
//   while(s<e){
//     if(arr[mid] >= arr[0]){
//       s = mid +1;

//     }
//     else{
//       e = mid;
//     }
//     mid = s + (e-s)/2;

//   }
//   return s;
// }

// int main() {
// int arr[5]= {7, 9, 1, 2,3};
// cout<<"pivot element is =="<< pivot( arr , 5) << endl;
// }

// #include<iostream>
// using namespace std;

// int pivot( int arr[], int n){
//   int s = 0;
//   int e = n-1;
//   int mid = s = (e-s)/2;
//   while(s<e){
//     if(arr[mid] >= arr[0]){
//       s = mid +1;

//     }
//     else{
//       e = mid;
//     }
//     mid = s + (e-s)/2;

//   }
//   return s;
// }


// int binarySearch( int arr[], int s , int e ,int key){
//   int start = s;
//   int end = e ;
//   int mid= s+ (e-s)/2;
//   int ans = -1;
//   while(start<=end){
//     if(arr[mid]==key){
//       ans=mid;

//     }
//     else if(arr[mid]>key){
//       start = start +1;
//     }
//     else if(arr[mid]<key){
//       end = mid -1;
//     }
//     mid = start + (end-start)/2;
//   }
//   return -1;
  
// }
// int findingNemo(int arr[], int n , int key){
//   int pivote = pivot(arr , 11);
//   if(arr[pivote]<=key<=arr[n-1]){
//     return binarySearch(arr , pivote , n-1 , key );
//   }
//   else{
//     return binarySearch( arr , 0 , pivote , key);
//   }

// }

// int main() {
//   int arr[11]= { 7, 8,11,15, 17, 1,2,3,4,5,6};
//   cout<< findingNemo(arr , 11 , 3)<<endl;
  
// }
// #include<iostream>
// using namespace std;

// long long int square(int arr[], int n ){
//     int s = 0 ;
//     int e = n-1;
//    long long int mid = s +(e-s)/2;
//    long long int ans = -1;
   
//     while(s<=e){
//         long long int sq = arr[mid]*arr[mid];
//         if(sq== 25 ){
//             return arr[mid];
//         }
//         else if(sq> 25){
//             e = mid -1;
//         }
//         else if(sq < 25){
//             s = mid +1;
//         }
//         mid = s + (e-s)/2;
//     }
// }
    




// int main () {
//     int arr[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
//     cout<< square(arr , 25);
// }

// #include<iostream>
// using namespace std;


// bool isPossible( int arr[] , int n, int m ,int mid){
//     int studentCount = 1;
//     int PageSum = 0;
//      for( int i =0; i<n ; i++){
//         if(PageSum + arr[i] <= mid){
//             PageSum+= arr[i];

//         }
//         else{
//             studentCount++;
//             if( studentCount > m || arr[i]> mid){
//                 return false;
//             }
//             PageSum = arr[i];
//         }

//      }
//      return true;
// }


// int bookallocate( int arr[] , int n, int m){
//     int s = 0;
//     int sum = 0;
//     for(int i = 0 ; i<n ; i++){
//         sum = sum + arr[i];

//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(isPossible( arr , n , m , mid)){
//             ans = mid;
//             e = mid-1;

//         }
//         else{
//             s = mid +1;
//         }
//         mid = s + (e-s)/2;

//     }
//     return ans;
// }




// int main () {
//     int arr[5] = { 10 , 20  , 30 , 40 , 50};
//     cout<< bookallocate(arr , 5, 2)<< endl;

// }


// #include<iostream>
// using namespace std;


// bool possible(int arr[], int n , int k , int mid){
//     int Painter = 1;
//     int Board= 0;
//     for( int i=0 ; i<n ; i++){
//         if( Board + arr[i]<= mid ){
//             Board+= arr[i];
//         }
//         else{
//             Painter++;
//             if(Painter>k || arr[i]> mid){
//                 return false;
//             }
//             Board = arr[i];

//         }


//     }
//     return true;
    
// }


// int minTime( int arr[] , int n , int k ){
//     int s = 0;
//     int sum = 0 ;
//     for( int i = 0; i<n ; i++)
//     {
//       sum += arr[i];
//     }
//     int e = sum;
//     int mid = s + (e-s)/2;
//     int ans = 0;
//     while(s<=e){
//         if(possible(arr , n , k ,mid)){
//             ans = mid;
//             e= mid -1;

//         }
//         else{
//             s = mid +1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }


// int main() {

//     int arr[4]= {5 , 5, 5 ,5 };
//     cout<< minTime(arr, 4 , 2)<< endl;

// }

// #include<iostream>
// using namespace std;


// int aggresive(int arr[] , int n , int k){
//     int maxi = -1;
//     for(int i = 0 ; i<n ; i++){
//         maxi = max(maxi , arr[i]);

//     }
//     int mini = -1;

//     for(int i= 0 ; i<n ; i++){
//         mini = min(mini , arr[i]);


//     }
//     int s = 0 ; 
//     int e = maxi - mini ;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if()
//     }
// }



// int main () {

//     int arr[5]= { 4 , 2 , 1 , 3 , 6};

// }


#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&nums){
    int low=0,high= INT8_MAX;
}