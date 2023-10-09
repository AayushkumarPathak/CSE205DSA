#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val%2==0){
            q.push(val);
        }
        else{
            cout<<"Invalid element "<<val<<" , only even numbers can be enqueued"<<endl;
            
        }
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}