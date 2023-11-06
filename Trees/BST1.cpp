#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class BinaryTree{
    public:
    Node* root;

    BinaryTree(){
        this->root = NULL;
    }
    Node* buildTree(){
        cout<<"Enter Data: ";
        int d;
        cin>>d;
        root = new Node(d);
        if(d == -1){
            return NULL;
        }
        if(d > root->data){
            cout<<"Enter to the right of node "<<d<<" : ";
            root->right = buildTree();
        }
        else{
            cout<<"Enter to the left of node "<<d<<" : ";
            root->left = buildTree();
        }
        cout<<"Tree Created Successfully!";
        return root;

    }

};


int main(){
    Node* root = NULL;
    BinaryTree tree;
    root = tree.buildTree();


    return 0;
}