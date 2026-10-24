#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }

    //destructor
    ~Node() {
        //memory free
        int value = this->data;
        if(this->next !=NULL ){
            delete next;
            next = NULL;
         
        }
        cout<<"memory is freed "<<endl;

    }
};

void insertatTail(Node* &tail , int data){
    Node*temp = new Node(data);
    tail ->next = temp;
    tail = temp;


}
void insertathead(Node* &head , int d){

    //new node create 
    Node* temp = new Node(d);
    temp ->next = head;
    head  = temp;
}

void print(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}


    void insertAtPosition( Node* &tail ,Node* &head , int position , int d){
        if(position ==1){
            insertathead(head , d);
            return;
        }
        Node* temp = head ; 
        int cnt =1;
        while(cnt<position -1){
            temp = temp->next;
            cnt++;

        }
        //inserting at last position

        if(temp->next ==NULL){
            insertatTail(tail , d);
        }

        Node* nodeToinsert = new Node(d);
        nodeToinsert->next = temp->next;
        temp->next = nodeToinsert;
    }

    void deletNode(int position , Node* &head){
        //delete first or starting node
        if(position == 1){
            Node *temp = head;
            head =head ->next;
            temp->next =NULL;
            delete temp;
        }
        else{
            //any middle or last;
            Node*current = head;
            Node*prev = NULL;
            int cnt =1;
            while(cnt<position ){
                prev = current;
                current = current->next;
                cnt++;


            }

            prev->next = current->next;
            current->next =NULL;
            delete current;

        }
    }




 
int main() {
    //create new node;
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointer to node1

    Node* head = node1;
    Node*tail = node1;
    print(head);

    // insertathead(head , 12);
    // print(head);

    insertatTail(tail , 12);
    print(head);
    insertatTail(tail , 15);
    print(head);

    insertAtPosition(tail , head , 3, 22);
    print(head);

    deletNode(1 , head);
    print(head);


}