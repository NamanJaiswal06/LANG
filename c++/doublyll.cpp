#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;


    //constructor;
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;

    }
    //destructor
    ~Node() {
        int val = this->data ; 
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for data"<<endl;
    }



};
//traversing a dll

void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp ->data <<" ";
        temp = temp->next; 
    
    }
    cout<<endl;
}

//getting length 
int getLenght(Node* head){
    int len  = 0;
    Node* temp = head;
    while(temp!= NULL){
       len++;
        temp = temp->next; 
    

    }
    return len;
}

void insertathead(Node* &tail , Node* &head , int data){
    if(head ==NULL){
        Node*temp = new Node(data);
        head =temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    temp->next = head;
    temp ->prev = temp;
    head = temp ;
    }


}
void insertattail(Node* &tail , Node* head , int data){
    if(tail ==NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;


    }
    else{
    Node* temp = new Node(data);
    tail ->next = temp ;
    temp ->prev = tail;
    tail =temp ;
    }
}
void insertatPos(Node* &head ,Node* &tail ,  int position , int data ){
    if(position ==1){
        insertathead(tail , head , data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertattail(tail ,head,  data);
        return;
    }
    Node* toinsert = new Node(data);
    toinsert ->next = temp ->next;
    temp ->next ->prev = toinsert;
    temp ->next = toinsert;
    toinsert->prev = temp;
}

  void deleteNode(int position , Node* &head){
    if(position ==1){
        Node*temp = head;
        temp->next->prev = NULL;
        head = temp ->next;
        temp->next =NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr ->prev = NULL;
        prev ->next = curr->next;
        curr ->next =NULL;
    }
  }


int main() {
    
    Node *head = NULL;
    Node* tail = NULL;
    print(head);
    cout<<getLenght(head)<<endl;

    insertathead(tail , head , 12);
    print(head);

        insertathead(tail , head , 13);
    print(head);
    insertathead(tail , head , 15);
    print(head);
    insertathead(tail , head , 8);
    print(head);

    insertattail(tail,head, 25);
    print(head);
    
    insertattail(tail , head , 28);
    print(head);

    insertatPos(head , tail ,2, 100);
    print(head);
    insertatPos(head , tail ,1, 100);
    print(head);
    insertatPos(head , tail ,9, 500);
    print(head);
    
    deleteNode(9 , head);
    print(head);
}
