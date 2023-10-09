#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL,*temp;

int main(){
    int choice;
    cout<<"Enter the choice: ";
    cin>>choice;

    while(choice){
        struct Node* newNode = new Node();
        cout<<"Enter the data:";
        cin>>newNode->data;
        if(head == NULL){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        cout<<"Enter choice: ";
        cin>>choice;

    }
    cout<<endl;
    temp = head;
    if(temp == NULL){
        cout<<"LinkedList is empty!";
        return 0;
    }
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}