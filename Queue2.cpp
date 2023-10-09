#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q2;
    queue<int> q3;
    q2.push(3);
    q2.push(4);
    q2.push(1);
    q2.push(7);
    q2.push(9);

    cout<<"Front: "<<q2.front()<<endl;
    cout<<"Back: "<<q2.back()<<endl;

    // empty() 
    cout<<"Empty or not: "<<q2.empty()<<endl;

    // size()
    // cout<<"Size of Queue: "<<q2.size()<<endl;
    // q2.emplace(10); cout<<"Inserting.."<<endl;
    // cout<<"Now, Back: "<<q2.back()<<endl;


    q3.push(11);
    q3.push(12);
    q3.push(13);
    q3.push(14);
    q3.push(15);

    q2.swap(q3);
    cout<<"Now q2:";
    while(!q2.empty()){
        cout<<q2.front()<<" <- ";
        q2.pop();
    }
    cout<<endl;
    
    cout<<"Now q3:";
    while(!q3.empty()){
        cout<<q3.front()<<" <- ";
        q3.pop();
    }
    cout<<endl;


    return 0;
}