#include<iostream>
#include<vector>
using namespace std;


// int main() {
//     vector<int>vec = {1, 2 , 3};
//     cout<< vec[0]<<endl;
//     vector<int>vect( 5 , 0);
//     cout<<vect[0]<<endl;
//     cout<<vect[1]<<endl;
//     cout<<vect[2]<<endl;
//     cout<<vect[3]<<endl;
//     cout<<vect[4]<<endl;
//     vector<char>vecto={ 'a', 'b', 'c' };
//     for( char i : vecto){
//         cout<< i <<endl;
//     }
    
//     return 0;
// }

// int main() {
//     vector<int>vec;

//     cout<< vec.size()<<endl;
//     vec.push_back(25);
//     cout<< vec.size()<<endl;
//     vec.push_back(35);
//      vec.push_back(45);

//      vec.pop_back();
//      cout<< vec.front()<<endl;
//      cout<< vec.back()<<endl;
//      cout<< vec.at(1)<< endl;
//      return 0;
// }
int main() {
    vector<int>vect = { 1,2,1,2,4};
    int ans = 0;
    for( int val : vect){
     ans = ans ^ val;
    }
    cout<<ans<<endl;
}