#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(){
        this->head = nullptr;
    }
    
    void addLast(int data){
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node* currNode = head;
        while(currNode->next!=nullptr){
            currNode = currNode->next;
        }
        currNode->next  = newNode;
    }
    
    void printLL(){
        Node* currNode = head;
        if(head == nullptr){
            return;
        }
        while(currNode!=nullptr){
            cout<<currNode->data<<" ";
            currNode = currNode->next;
        }
    }
};

int main(){
    int n;
    cin>>n;
    LinkedList list;
    if(n==0){
        cout<<"List is empty.";
    }
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        list.addLast(ele);
    }
    list.printLL();
    return 0;
}