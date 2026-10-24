#include<iostream>
using namespace std;

// class Student{

//     private:
//     string name;
//     int age ;
//     int height;
//     public:
//     int getAge(){
//         return this->age;
//     }



// };

//inheritance
// class Human{
//     public:
//     int height;
//     int weight;
//     int age;

//     public:
//     int getAge(){
//         return this->age;

//     }
//     void  setWeight(int w){
//         this->weight = w;
//     }
// };

// class Male : public Human{
// public:

// string color;

// void sleep(){
//     cout<<"male sleeping"<<endl;
// }
// };

//polymorphism 


// class A{


//     public:
//     void sayHello() {
//         cout<<"hello Love Babbar"<<endl;
//     }



//     void sayHello(string name) {

//         cout<<"hello Love Babbar"<<name <<endl;
//     }

//     int sayHello(int n){
//         cout<< n <<"Say hello" << endl;
//         return 1;
//     }


// };

//operator overloading 


// class B{
//     public:
//     int a ; 
//     int b ; 
//     public:

//     int add(){
//         return a+b;
//     }

//     void operator+(B &obj){
//         int value1 = this->a;
//         int value2 = obj.a;
//         cout<< "output" << value2 - value1<<endl;
//     }
// };


// run time polymorphism 

class Animal{

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal{

    public:
    void speak() {
        cout<<"barking " <<endl;
    }
};


int main() {

    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.weight<<endl;

    // cout<<object1.color<<endl;
    // object1.setWeight(84);
    // object1.sleep();

    // B obj1 , obj2;

    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 +obj2;
   

    Dog obj;
    obj.speak() ;
    


}