#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this->next = NULL;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        this->head = NULL;
    }

    void addLast(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* currNode = head;
        while(currNode->next!=NULL){
            currNode = currNode->next;
        }
        currNode->next = newNode;
    }

    void printLL(){
        Node* currNode = head;
        if(head == NULL){
            cout<<"LinkedList is empty!";
        }
        while(currNode!=NULL){
            cout<<currNode->data<<" -> ";
            currNode = currNode->next;
        }
        cout<<"NULL";
    }


};

int main(){
    LinkedList list;

    int n;
    cout<<"Enter LL size: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int val;
        cout<<"Enter the Element: ";
        cin>>val;
        list.addLast(val);
    }
    list.printLL();
    return 0;
}