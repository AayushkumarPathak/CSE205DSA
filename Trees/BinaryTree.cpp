#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = this->right = NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter data:";
    int data;
    cin>>data;
    root = new Node(data);


    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data to insert at left of ("<<data<<") :";
    root->left = buildTree(root->left);
    cout<<"Enter the data to insert at right of ("<<data<<") :";
    root->right = buildTree(root->right);

    return root;

}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){ //LNR
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    cout<<"PreOrder:";
    preOrder(root);
    cout<<endl;
    cout<<"InOrder:";
    inOrder(root);
    cout<<endl;

    cout<<"PostOrder:";
    postOrder(root);
    return 0;
}