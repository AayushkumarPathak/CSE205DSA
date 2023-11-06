#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

class BinaryTree{
    public:
    Node* root;

    BinaryTree(){
        this->root = NULL;
    }

    Node* buildtree(){
        cout<<"Enter data:";
        int data;
        cin>>data;

        root = new Node(data);

        if(data == -1){
            return NULL;
        }
        cout<<"Enter to left of "<<data;
        root->left = buildtree();

        cout<<"Enter to right of "<<data;
        root->right = buildtree();

        return root;

    }
    void preOrder(Node* root){
        if(root == NULL){
            return;
        }
        //NLR
        cout<<"PreOrder";
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }

};
/* ERROR */
int main(){
    BinaryTree bt;
    bt.buildtree();
    Node* root = NULL;
    bt.preOrder(root);
    return 0;
}
