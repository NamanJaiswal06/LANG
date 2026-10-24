#include<iostream>
using namespace std;


class Node{

public:
    int data;
    Node* left;
    Node* right;

Node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;

}

};

Node* insertIntoBst(Node * root , int data){

    //base case
    if(root ==NULL){
        root = new Node(data);
        return root;

    }
    if(data>root->data){
        //right
        root->right = insertIntoBst(root->right, data);
    }
    else{

        root->left = insertIntoBst(root->left , data);
    }

}

int  minVal(Node* root , int val){
    Node* temp = root;
    while(temp->left !=NULL){
        temp = temp->left;
    }

    return temp->data;

}

Node * deletefromBst(Node * root , int val){
    //base case
    if(root ==NULL){
        return root;
    }
    if(root->data == val){
        //0 child
        if(root->left ==NULL && root->right ==NULL){
            delete root;
            return NULL;
        }

        //1 child
        if(root->left !=NULL && root->right ==NULL){
            Node * temp = root->left;
            delete root;
            return temp;

        }
        if(root->right !=NULL && root->left ==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left !=NULL && root->right !=NULL ){
            int mini = minVal(root->right ,val);
            root->data = mini;
            root->right = deletefromBst(root->right , mini);
            return root;
        }
    }
    else if(root->data > val){
        root->left = deletefromBst(root->left, val);
        return root;
    }
    else{

        root->right = deletefromBst(root->right , val);
        return root;
    }
}

void takeInput(Node * &root){

    int data;
    cin>>data;

    while(data != -1){
        insertIntoBst(root , data);
        cin>>data;
    }
}


int main() {

    Node * root = NULL;

    cout<< "enter data to create BST";
    takeInput(root);
}