#include<iostream>
#include<string.h>
// #include "Hero.cpp"
using namespace std;
class Hero{

    
    int health;
    char level;
    public:
    static int timeToComplete;

    char *name;

    //getter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    } 

    //setter
    int setHealth(int h){
        health = h;
    }
    char setLevel(char ch){
        level = ch;

    }
    Hero(){
        name = new char[100];
        cout<<"constructor"<<endl;
    }
    //parametrized
    Hero(int health){
        this->health = health;

    }
    Hero(int health , char ch){
        this-> health  = health;
        this ->level = ch;
    }

    //copy constructor
    // Hero(Hero& temp){
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
    void setname(char name[]){
        strcpy(this->name , name);
    }
     int Hero::timeToComplete = 5;

     static int random() {
       return timeToComplete ;
     }
    ~Hero(){
        cout<<"destructor nhai called"<<endl;
    }
   

    
};



int main(){


    //creating a object 
    // Hero ramesh(70);
    
    // cout<<ramesh.getHealth();

    //dynamically
    // Hero *h = new Hero(11);
   
    // Hero temp(22 , 'B');

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setname(name);


    //default copy constructor 
    Hero hero2(hero1);
     //or

    //  Hero hero2 = hero1;

    Hero * h = new Hero ;
    //manually destructor called
    delete h;
    cout<<Hero::timeToComplete <<endl;
    cout<<Hero ::random() <<endl;

}