#include<iostream>
#include<queue>
using namespace std;

int main() {
    //create a queue
    // queue<int>q;
    // q.push(11);
    // q.push(13);
    // q.push(15);
    // cout<<"size of queue"<<q.size() <<endl;
    // q.pop();
    // cout<<"size of queue"<<q.size() <<endl;

    //deque

    deque<int>d;
    d.push_front(12);
    d.push_back(14);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    d.pop_back();
    if(d.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"non empty"<<endl;
    }


}