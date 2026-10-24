#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next == NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory freed"<<endl;
    }


};

void insertNode(Node* &tail , int element , int d){
    //assumming that element is presset in the list 

    //empty list 
    if(tail ==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode ->next = newNode;


    }

    else{
        //non empty list 
        //assuming that the element is present in the list 

        Node * curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next ;
        curr ->next = temp ;

    }

   

}
 void print(Node* tail) {
        Node* temp = tail;
        if(tail ==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
       do{
        cout<<tail->data<<" ";
        tail = tail->next;
        
       }while(tail!=temp);
       cout<<endl;
    }

    void deleteNode(Node * &tail , int element) {
        //empty list
        if(tail ==NULL){
            cout<<"List is empty, please check again "<<endl;
            return;
        }
        else{
            //non empty

            Node* prev = tail;
            Node* curr = prev ->next;

            while(curr->data != element ){
                prev = curr;
                curr = curr->next ;


            }
            //1 node ll
            if(curr == prev){
                tail = NULL;
            }
            prev ->next = curr->next;
            if(tail == curr){
                tail = prev;
            }
            curr->next = NULL;
            delete curr;
        }
    }

int main() {
    Node* tail  = NULL;
    //empty list me insert krne hai
    insertNode(tail , 5 , 3);

    print(tail);
    insertNode(tail , 3 , 5);
    print(tail);
    insertNode(tail , 5, 7);
    insertNode(tail , 7 , 9);
    print(tail);
    insertNode(tail , 5 ,6);
    print(tail);
    deleteNode(tail , 9);
    print(tail);
}



