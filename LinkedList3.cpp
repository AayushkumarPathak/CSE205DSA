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
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        this->head = NULL;
    }

    void insertLast(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = newNode;
    }

    void insertFirst(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;

    }

    void printLL(){
        Node* curr = head;

        if(head == NULL){
            cout<<"LinkedList empty."<<endl;
            return;
        }
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }


};
int main(){
    LinkedList list;
    int choice;
    cout<<"Enter 0 to exit... \nEnter the choice: ";
    cin>>choice;

    while(choice){
        int ele;
        cout<<"Enter the ele: ";
        cin>>ele;
        // list.insertLast(ele);
        list.insertFirst(ele);
        cout<<"Enter 0 to exit...\nEnter choice:";
        cin>>choice;
    }
    list.printLL();
    return 0;
}